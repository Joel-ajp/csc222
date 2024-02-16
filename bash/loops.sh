#!/bin/bash

### WHILE LOOP ###
counter=10

while [ $counter -gt 0 ]
do 
    echo while=$counter
    let counter-=1 # Let updates variable value
done

echo

let counter=20
until [ $counter -lt 10 ]
do 
    echo until=$counter
    let counter-=1
done

### FOR IN ###
echo

for i in 1 5 10 15 20 25
do
    echo for=$i
done

### FOR RANGE ###
echo

for (( i=0; i<10; i++ ))
do
    echo for-range=$i
    if (( i>5 )); then
        break
    fi
done

