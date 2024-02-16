#!/bin/bash

echo "Enter a file name"
read filename 

if [ ! -r $filename ]; then
    echo "$filename is not readable"
else 
    echo "$filename is readable"
fi



