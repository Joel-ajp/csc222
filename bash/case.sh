#!/bin/bash

echo "Enter Y to list all files"
echo "Enter N to list all non-hidden files"
echo "Enter Q to quit"

read -p "Enter your choice: " reply 

case $reply in
    Y|y|yes|YES) echo "displaying all files"; ls -l;;
    N|n|no|NO) echo "displaying all non-hidden files"; ls;;
    Q|q|quit|QUIT) echo "Done."; exit 0;;
    *) echo "Invalid command"; exit 1;;
esac

