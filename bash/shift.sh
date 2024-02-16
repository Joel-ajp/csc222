#!/bin/bash

while [[ $1 ]]
do
    echo $1     
    shift
done

echo

testShift() {
    while [[ $1 ]]
    do 
        echo $1
        shift
    done
}

echo

testShift 1 2 3 4 5 6 7 8 9 10 11 12