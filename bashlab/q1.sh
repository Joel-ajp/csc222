#!/bin/bash
# Name(s): Joel Porter
# Date: 2.15.24
# Description: Bash Lab

multiply() {
    local product=1
    for num in "$@"; do
        ((product *= num))
    done
    echo "$product"
}


if [ $# -eq 0 ]; then
    echo "Usage: bash q1.sh val [val [ ... ] ]"
    echo "e.g., bash q1.sh 25 32 1 45 66 150"
else 
    product=$(multiply $@)
    echo "The product of $@ is: $product"
fi
