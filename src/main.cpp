#include <spot/tl/parse.hh>
#include <spot/tl/print.hh>
#include <spot/tl/formula.hh>
#include <spot/twaalgos/translate.hh>
#include <spot/twaalgos/dot.hh>
#include <spot/twaalgos/hoa.hh>
#include <spot/twaalgos/minimize.hh>
#include <spot/twaalgos/complement.hh>
#include <spot/twa/twa.hh>
#include <spot/twa/bdddict.hh>
#include <spot/twa/bddprint.hh>
#include <spot/twa/twagraph.hh>
#include <spot/misc/bddlt.hh>
#include <spot/twaalgos/copy.hh>
#include <spot/graph/graph.hh>
#include <spot/parseaut/public.hh>
#include <spot/gen/automata.hh>
#include <spot/gen/formulas.hh>
#include <spot/ta/ta.hh>
#include <spot/twaalgos/dot.hh>
#include <spot/twaalgos/translate.hh>
#include <spot/twaalgos/dot.hh>
#include <spot/twa/bddprint.hh>
#include <spot/twaalgos/hoa.hh>
#include <bddx.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>
#include <spot/twaalgos/toparity.hh>
#include <spot/twaalgos/totgba.hh>
#include <spot/twaalgos/remfin.hh>
#include <spot/parseaut/public.hh>
#include <spot/tl/defaultenv.hh>
#include <spot/tl/environment.hh>
#include <spot/twaalgos/sccinfo.hh>

using namespace std;
using namespace spot;



void load_env()
{
    ifstream env("../.env");
    if (!env.is_open()) {
        cerr << "Error: .env file not found" << endl;
        exit(1);
    }
    string line;
    while (getline(env, line)) {
        if (line.empty() || line[0] == '#') continue;
        auto delimiterPos = line.find("=");
        auto key = line.substr(0, delimiterPos);
        auto value = line.substr(delimiterPos + 1);
        setenv(key.c_str(), value.c_str(), 1);
    }
    env.close();
}

int main ()
{
    load_env();
    string src_dir = getenv("PROJECT_SRC_PATH");
    string goal_path = getenv("GOAL_PATH");

    // LTL式の入力
    string ltl_formula_str = "G((x1 -> F(y)) & (x2 -> !y))";
    vector<string> responseEvents = {"y"};
    parsed_formula parsed = parse_infix_psl(ltl_formula_str);
    formula formula = parsed.f;
    cout << "入力 LTL : " << str_psl(formula) << endl;
    cout << "応答イベント : ";
    for (auto res: responseEvents) {
        cout << res << endl;
    }

    // LTL式 => Buchiオートマトン 変換
    translator translator;
    twa_graph_ptr automaton = translator.run(formula);
    // cout << "Buchi オートマトン : " << endl;
    // print_dot(cout, automaton);

    // 命題変数を要求イベントだけに制限
    auto dict = automaton->get_dict();
    auto new_automaton = make_twa_graph(dict);

    // 命題変数の情報を取得
    // dict->dump(cout);
    for (string res: responseEvents) {
        parsed_formula responseEvents_parsed = parse_infix_psl(res);
        int res_BDD_index = dict->var_map[responseEvents_parsed.f];
        for (auto& t: automaton->edges()) {
            auto& cond = t.cond;
            auto dst = t.dst;
            auto src = t.src;
            bdd resBDD = bdd_ithvar(res_BDD_index);
            cond = bdd_exist(cond, resBDD);
            // デバッグ用
            // cout << "cond : " << cond << endl;
            // cout << "dst : " << dst << endl;
            // cout << "src : " << src << endl;
        }
    }
    // print_dot(cout, automaton);

    automaton->prop_universal(false);
    // cout << "HOAフォーマットにしたオートマトン : " << endl;
    // print_hoa(cout, automaton);
    // hoa形式をファイルに出力する
    ofstream ofs("automaton.hoa");
    print_hoa(ofs, automaton);
    ofs.close();

    // cliからgoalを使う
    ofstream convertedFile("convertedAutomaton.hoa");
    ofstream complementedFile("complemented.hoa");
    ofstream simplifiedFile("simplified.hoa");
    convertedFile.close();
    complementedFile.close();
    simplifiedFile.close();
    string cmd = goal_path + " batch " + src_dir + "/script.sh";
    system(cmd.c_str());
    // cout << "" << endl;
    // cout << "補オートマトン : " << endl;
    const char* filename = "simplified.hoa";
    ifstream hoa_file(filename);
    spot::bdd_dict_ptr d = make_bdd_dict();
    auto complemented = parse_aut(filename, d);
    //print_dot(cout, complemented->aut);

    // 極大強連結成分(SCC)の探索
    scc_info info(complemented->aut);
    // デバッグ用
    // cout << "すべてのscc::" << info.scc_count() << endl;
    // cout << "受理状態を含むsccの数::" << info.one_accepting_scc() << endl;
    // auto marks = info.marks();
    // for (size_t i = 0; i < marks.size(); i++) {
    //     for (auto mark : marks[i]) {
    //         cout << "sccのindexとmark " << i << " : " << mark.as_string() << endl;
    //     }
    // }
    // 命題変数の情報を取得
    // cout << "命題変数の情報" << endl;  
    // complemented->aut->get_dict()->dump(cout);

    // 要求イベント制約式の導出
    auto bddT = bddtrue;
    auto bdd0 = bdd(bddT);
    auto bdd1 = bdd(bddT);
    auto bdd2 = bdd(bddT);

    vector<bdd> formula_list;
    for (auto scc : info) {
        // cout << "極大強連結成分 : " << endl;
        if (scc.is_accepting()) { //受理状態を含むSCCを取得
            for (auto state : scc.states()) {
                // cout << "状態：" << state << " " << endl;
                for (auto edge : complemented->aut->out(state)) {
                    // cout << "遷移：" << edge.src  << " " << edge.cond << " " << edge.dst << endl;
                    if (find(scc.states().begin(), scc.states().end(), edge.dst) != scc.states().end()) {
                        auto n = bdd_not(edge.cond);
                        bdd2 = bdd_and(bdd2, n);
                    }
                }
                bdd1 = bdd_and(bdd1, bdd2);
            }
            formula_list.push_back(bdd1);
            // bdd_print_formula(cout, complemented->aut->get_dict(), bdd1);
        }
    }

    // 含意関係で条件の緩いものを排除
    vector<bdd> result_list = {formula_list[0]};
    for (size_t i = 0; i < formula_list.size(); i++) {
        bool keep = true;
        for (size_t j = 0; j < formula_list.size(); j++) {
            if ((i != j) && (bddtrue == bdd_imp(formula_list[j], formula_list[i]))) {
                keep = false;
                break;
            }
        }
        if (keep) {
            result_list.push_back(formula_list[i]);
        }
    }

    cout << "要求イベント制約式 : ";
    string result_formula = "";
    for (size_t i = 0; i < result_list.size(); i++) {
        result_formula += "G F " + bdd_format_formula(complemented->aut->get_dict(), result_list[i]);
        if (i != formula_list.size() - 1) {
            result_formula += " && ";
        }
    }
    parsed_formula result_parsed = parse_infix_psl(result_formula);
    tl_simplifier simplifier;
    //auto simplified = simplifier.simplify(result_parsed.f);
    cout << str_psl(result_parsed.f) << endl;

    return 0;
}
