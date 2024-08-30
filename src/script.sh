#!bin/bash
include "automaton.hoa";
convert -t nbw -o convertedAutomaton.hoa automaton.hoa;
complement -m ramsey -o complemented.hoa convertedAutomaton.hoa;
$aut =  simplify -dse -ds -rse -rs -ru -rd complemented.hoa;
save -c HOAF $aut simplified.hoa;