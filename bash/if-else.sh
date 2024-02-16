#!/bin/bash

if [[ -f $1 ]]
then 
    echo "$1 is a file"
else
    echo "$1 is not a file"
fi

if [ $1 -lt 100 ]; then
    echo $1 is less than 100
elif [ $1 -gt 100 ]; then
    echo $1 is greater than 100
else
    echo $1 is equal to 100
fi