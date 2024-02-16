#!/bin/bash

bonus=2
read -p "Enter the grade for quiz 1" quiz1
read -p "Enter the grade for quiz 2" quiz2

if [[ $quiz1 -eq 10 && $quiz2 -eq 10 ]]; then
    echo "You don't need any bonus"
else 
    echo "You will get $bonus bonus points"
fi