#!/bin/bash

testfile() {
    if [ $# -gt 0 ]; then
        if [[ -f $1 ]]; then
            echo "$1 is a file"
        else
            if [[ -d $1 ]]; then
                echo "$1 is a directory"
            else echo "$1 is not valid"
            fi
        fi
    fi
}

testfile .
testfile first.sh
testfile asdf.sh