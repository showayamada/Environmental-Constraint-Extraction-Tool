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
#include <time.h>

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
    time_t start, end;
    start = time(NULL);

    load_env();
    string src_dir = getenv("PROJECT_SRC_PATH");
    string goal_path = getenv("GOAL_PATH");

    // LTL式の入力
    // エレベーターの例
    // 2F
    //string ltl_formula_str = "G(Loc1 || Loc2)& ((G(Loc1 -> (! Loc2)) & G(Loc2 -> (!Loc1))) & G(LocBtn1 -> F Loc1 & ReqLoc1 W(Loc1 & ReqLoc1)) & G(LocBtn2 -> F Loc2 & ReqLoc2 W(Loc2 & ReqLoc2))) & G(Loc1 & ReqLoc1 -> Open &(Loc1 W Movable)) & G(Loc2 & ReqLoc2 -> Open &(Loc2 W Movable)) & G(Loc1 & Movable ->(! ReqLoc1)W LocBtn1) & G(Loc2 & Movable ->(! ReqLoc2)W LocBtn2) & G(Loc1& ! ReqLoc1 -> ! Open) & G(Loc2& ! ReqLoc2 -> ! Open) & G(Open -> (! Movable)W ! Open) & G(! Open -> Movable W Open) & G(Open -> F OpenTimedOut) & G(OpenBtn & ! OpenTimedOut ->ReqOpen) & G(OpenTimedOut -> ! Open) & G(CloseBtn & ! ReqOpen -> ! Open) & G(ReqOpen & ! Movable -> Open)";
    vector<string> ltl_formula_str_list = {
        "G(Loc1 || Loc2) & ((G(Loc1 -> (! Loc2)) & G(Loc2 -> (!Loc1)))",
        "G(LocBtn1 -> F Loc1 & ReqLoc1 W(Loc1 & ReqLoc1)) & G(LocBtn2 -> F Loc2 & ReqLoc2 W(Loc2 & ReqLoc2))",
        "G(Loc1 & ReqLoc1 -> Open &(Loc1 W Movable)) & G(Loc2 & ReqLoc2 -> Open &(Loc2 W Movable))",
        "G(Loc1 & Movable ->(! ReqLoc1)W LocBtn1) & G(Loc2 & Movable ->(! ReqLoc2)W LocBtn2)",
        "G(Loc1& ! ReqLoc1 -> ! Open) & G(Loc2& ! ReqLoc2 -> ! Open)","G(Open -> (! Movable)W ! Open)",
        "G(! Open -> Movable W Open)","G(Open -> F OpenTimedOut)","G(OpenBtn & ! OpenTimedOut ->ReqOpen)",
        "G(OpenTimedOut -> ! Open)","G(CloseBtn & ! ReqOpen -> ! Open)","G(ReqOpen & ! Movable -> Open)"
    };
    
    vector<string> responseEvents = {
        "Loc1",
        "Loc2",
        "ReqLoc1",
        "ReqLoc2",
        "Open",
        "Movable",
        "OpenTimedOut",
        "ReqOpen"
    };

    vector<parsed_aut_ptr> complemented_list;
    int cnt = 0;
    for (auto ltl_formula_str: ltl_formula_str_list) {
        cout << "======================" << endl;
        cnt++;
        cout << cnt << "番目のLTL式" << endl;
        parsed_formula parsed = parse_infix_psl(ltl_formula_str);
        //parsed_formula response_parsed = parse_infix_psl(response);
        formula formula = parsed.f;
        std::cout << "入力 LTL : " << str_psl(formula) << endl;
        std::cout << "応答イベント : ";
        for (auto res: responseEvents) {
            std::cout << res << endl;
        }

        // LTL式 => Buchiオートマトン 変換
        translator translator;
        twa_graph_ptr automaton = translator.run(formula);
        std::cout << "Buchi オートマトン : " << endl;
        print_dot(std::cout, automaton);

        // STEP 1: 命題変数を要求イベントxだけに制限
        auto dict = automaton->get_dict();
        auto new_automaton = make_twa_graph(dict);

        // //dict->dump(cout); // ここで命題変数の情報を取得できる;
        for (auto res: responseEvents) {
            parsed_formula responseEvents_parsed = parse_infix_psl(res);
            int BDD_index = dict->var_map[responseEvents_parsed.f]; // responseEventsに対応するbdd変数を取得
            for (auto& t: automaton->edges()) {
                auto& cond = t.cond;
                auto dst = t.dst;
                auto src = t.src;
                bdd x = bdd_ithvar(BDD_index);
                cond = bdd_exist(cond, x);
                // デバッグ用
                // cout << "cond : " << cond << endl;
                // cout << "dst : " << dst << endl;
                // cout << "src : " << src << endl;
            }
        }

        //automaton->prop_universal(false);
        std::cout << "HOAフォーマットにしたオートマトン : " << endl;
        //print_hoa(std::cout, automaton);
        // hoa形式をファイルに出力する
        cout << "automaton.hoaを出力します" << endl;
        ofstream ofs(to_string(cnt) + "_automaton.hoa");
        print_hoa(ofs, automaton);
        ofs.close();
        cout << "automaton.hoaを出力しました" << endl;
        
    } // 入力LTLが複数ある時のfor文のかっこのやつ

    end = time(NULL);
    std::cout << "処理時間 : " << difftime(end, start) << "秒" << endl;

    return 0;
}
