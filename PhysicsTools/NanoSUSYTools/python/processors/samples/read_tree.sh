#!/bin/bash
file="../Data_MET_2018_PeriodA.txt"
while IFS= read -r line
do
        # display $line or do somthing with $line
    #printf '%s\n' "$line"
    root -l '%s/n' "$line"
    printf 'Events->Scan("run")'"\n"
    printf '.q'
done <"$file"

