#!/bin/bash

echo Total number of command line arguments are: $#

echo $1 is the first argument.

# How can i grab argument 10?
echo Argument 10 is: ${10}

echo all arguments: $@
echo "Len of $1 is ${#1}"
echo 'Len of $1 is ${#1}'
