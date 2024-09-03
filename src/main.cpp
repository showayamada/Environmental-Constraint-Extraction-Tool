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
    string response = "y";
    parsed_formula parsed = parse_infix_psl(ltl_formula_str);
    parsed_formula response_parsed = parse_infix_psl(response);
    formula formula = parsed.f;
    cout << "入力 LTL : " << str_psl(formula) << endl;
    cout << "応答イベント : " << str_psl(response_parsed.f) << endl;

    // LTL式 => Buchiオートマトン 変換
    translator translator;
    twa_graph_ptr automaton = translator.run(formula);
    cout << "Buchi オートマトン : " << endl;
    print_dot(cout, automaton);

    // STEP 1: 命題変数を要求イベントxだけに制限
    auto dict = automaton->get_dict();
    auto new_automaton = make_twa_graph(dict);

    dict->dump(cout); // ここで命題変数の情報を取得できる;
    int y_BDD_index = dict->var_map[response_parsed.f]; // yに対応するbdd変数を取得
    for (auto& t: automaton->edges()) {
        auto& cond = t.cond;
        auto dst = t.dst;
        auto src = t.src;
        bdd y = bdd_ithvar(y_BDD_index);
        cond = bdd_exist(cond, y);
        // デバッグ用
        // cout << "cond : " << cond << endl;
        // cout << "dst : " << dst << endl;
        // cout << "src : " << src << endl;
    }
    print_dot(cout, automaton);

    automaton->prop_universal(false);
    cout << "HOAフォーマットにしたオートマトン : " << endl;
    print_hoa(cout, automaton);
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
    cout << "" << endl;
    cout << "補オートマトン : " << endl;
    const char* filename = "simplified.hoa";
    ifstream hoa_file(filename);
    spot::bdd_dict_ptr d = make_bdd_dict();
    auto complemented = parse_aut(filename, d);
    print_dot(cout, complemented->aut);

    // STEP 3: 極大強連結成分(SCC)の探索
    cout << "SCCたち : " << endl;
    scc_info info(complemented->aut);
    cout << "すべてのscc::" << info.scc_count() << endl;
    cout << "受理状態を含むsccの数::" << info.one_accepting_scc() << endl;
    auto marks = info.marks();
    for (size_t i = 0; i < marks.size(); i++) {
        for (auto mark : marks[i]) {
            cout << "sccのindexとmark " << i << " : " << mark.as_string() << endl;
        }
    }
    // 命題変数の情報を取得
    cout << "命題変数の情報" << endl;  
    complemented->aut->get_dict()->dump(cout);

    // STEP 4: 要求イベント制約式の導出
    auto bddT = bddtrue;
    auto bdd0 = bdd(bddT);
    auto bdd1 = bdd(bddT);
    auto bdd2 = bdd(bddT);
    for (auto scc : info) {
        if (scc.is_accepting()) { //受理状態を含むSCCを取得
            cout << "受理状態を含む極大強連結成分 ";
            for (auto state : scc.states()) {
                cout << "状態：" << state << " " << endl;
                for (auto edge : complemented->aut->out(state)) {
                    cout << "遷移：" << edge.cond << " " << endl;
                    auto n = bdd_not(edge.cond);
                    bdd2 = bdd_and(bdd2, n);
                }
                bdd1 = bdd_and(bdd1, bdd2);
            }
            bdd0 = bdd_and(bdd0, bdd1);
        }
    }
    cout << "最後の答え : " << bdd0 << endl;

    return 0;
}
