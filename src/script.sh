#!bin/bash
include "automaton.hoa";
echo "automaton.hoa loaded";
echo "simplifying automaton";
$automaton = simplify -dse -ds -rse -rs -ru -rd automaton.hoa;
echo "simplify success";
convert -t nbw -o convertedAutomaton.hoa $automaton;
echo "converted to nbw";
$converted = simplify -dse -ds -rse -rs -ru -rd convertedAutomaton.hoa;
complement -m ramsey -o complemented.hoa $converted;
echo "complement success";
$aut =  simplify -dse -ds -rse -rs -ru -rd complemented.hoa;
echo "simplify success";
save -c HOAF $aut simplified.hoa;