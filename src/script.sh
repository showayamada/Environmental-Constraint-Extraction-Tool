#!bin/bash
include "automaton.hoa";
echo "Automaton loaded";
convert -t nbw -o convertedAutomaton.hoa automaton.hoa;
echo "Automaton converted";
$autmaton =  simplify -dse -ds -rse -rs -ru -rd convertedAutomaton.hoa;
echo "Automaton simplified";
complement -m ramsey -o complemented.hoa $autmaton;
echo "Automaton complemented";
$aut =  simplify -dse -ds -rse -rs -ru -rd complemented.hoa;
echo "Automaton simplified";
save -c HOAF $aut simplified.hoa;