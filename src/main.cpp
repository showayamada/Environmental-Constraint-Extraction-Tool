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
#include <chrono>

using namespace std;
using namespace spot;


/**
 * @fn load_env
 * @brief .envファイルを読み込む
 * @return void
 */
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

int main (int argc, char *argv[])
{
    chrono::system_clock::time_point start, end;
    start = chrono::system_clock::now();

    chrono::system_clock::time_point load_env_start = chrono::system_clock::now();
    load_env();
    string src_dir = getenv("PROJECT_SRC_PATH");
    string goal_path = getenv("GOAL_PATH");
    chrono::system_clock::time_point load_env_end = chrono::system_clock::now();

    chrono::system_clock::time_point ltl_input_start = chrono::system_clock::now();
    // LTL式の入力
    string ltl_formula_str;
    vector<string> responseEvents;
    if (1 == argc) {
        ltl_formula_str = "((G(open -> F ! open)) &&(G (close -> F ! close)) &&(G (openext -> F ! openext))) ->((G (open -> F door)) &&(G (close -> ! door)) &&(G((openext && door) -> ((door U close) || (G door)))) &&((F G ! open) -> (F G !door)))";
        responseEvents = {"door"};
    } else {
        ltl_formula_str = argv[1];
        for (int i = 2; i < argc; i++) {
            responseEvents.push_back(argv[i]);
        }
    }
    // example
    // string ltl_formula_str = "G((x1 -> F(y)) & (x2 -> !y))";
    // vector<string> responseEvents = {"y"};
    parsed_formula parsed = parse_infix_psl(ltl_formula_str);
    formula formula = parsed.f;
    cout << "入力 LTL : " << str_psl(formula) << endl;
    cout << "応答イベント : ";
    for (auto res: responseEvents) {
        cout << res << endl;
    }
    chrono::system_clock::time_point ltl_input_end = chrono::system_clock::now();

    chrono::system_clock::time_point to_aut_start = chrono::system_clock::now();
    // LTL式 => Buchiオートマトン 変換
    translator translator;
    twa_graph_ptr automaton = translator.run(formula);
    // cout << "Buchi オートマトン : " << endl;
    // print_dot(cout, automaton);
    chrono::system_clock::time_point to_aut_end = chrono::system_clock::now();

    chrono::system_clock::time_point injection_start = chrono::system_clock::now();
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
    chrono::system_clock::time_point injection_end = chrono::system_clock::now();

    automaton->prop_universal(false);

    // ファイルに出力する
    ofstream ofs("automaton.hoa");
    print_hoa(ofs, automaton);
    ofs.close();
    ofstream dotfile("automaton.dot");
    print_dot(dotfile, automaton);
    dotfile.close();

    chrono::system_clock::time_point goal_start = chrono::system_clock::now();
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
    chrono::system_clock::time_point goal_end = chrono::system_clock::now();

    chrono::system_clock::time_point mscc_start = chrono::system_clock::now();

    // 極大強連結成分(MSCC)の探索
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

    chrono::system_clock::time_point mscc_end = chrono::system_clock::now();

    chrono::system_clock::time_point output_start = chrono::system_clock::now();

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
    chrono::system_clock::time_point output_end = chrono::system_clock::now();

    chrono::system_clock::time_point exclude_start = chrono::system_clock::now();

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
        cout <<"GF("<< bdd_format_formula(complemented->aut->get_dict(), result_list[i])<<")" << endl;
        if (i != formula_list.size() - 1) {
            cout << " && " << endl;
        }
        
    }

    chrono::system_clock::time_point exclude_end = chrono::system_clock::now();

    end = chrono::system_clock::now();
    double elapsed = chrono::duration_cast<chrono::milliseconds>(end-start).count();
    cout << "処理時間 : " << elapsed << "ms" << endl;

    // load_env_time
    double elapsed_load_env = chrono::duration_cast<chrono::milliseconds>(load_env_end-load_env_start).count();
    cout << "load_env処理時間 : " << elapsed_load_env << "ms" << endl;
    // ltl_input_time
    double elapsed_ltl_input = chrono::duration_cast<chrono::milliseconds>(ltl_input_end-ltl_input_start).count();
    cout << "ltl_input処理時間 : " << elapsed_ltl_input << "ms" << endl;
    // to_aut_time
    double elapsed_to_aut = chrono::duration_cast<chrono::milliseconds>(to_aut_end-to_aut_start).count();
    cout << "to_aut処理時間 : " << elapsed_to_aut << "ms" << endl;
    // injection_time
    double elapsed_injection = chrono::duration_cast<chrono::milliseconds>(injection_end-injection_start).count();
    cout << "injection処理時間 : " << elapsed_injection << "ms" << endl;
    // goal_time
    double elapsed_goal = chrono::duration_cast<chrono::milliseconds>(goal_end-goal_start).count();
    cout << "goal処理時間 : " << elapsed_goal << "ms" << endl;
    // mscc_time
    double elapsed_mscc = chrono::duration_cast<chrono::milliseconds>(mscc_end-mscc_start).count();
    cout << "mscc処理時間 : " << elapsed_mscc << "ms" << endl;
    // output_time
    double elapsed_output = chrono::duration_cast<chrono::milliseconds>(output_end-output_start).count();
    cout << "output処理時間 : " << elapsed_output << "ms" << endl;
    // exclude_time
    double elapsed_exclude = chrono::duration_cast<chrono::milliseconds>(exclude_end-exclude_start).count();
    cout << "exclude処理時間 : " << elapsed_exclude << "ms" << endl;

    return 0;
}
