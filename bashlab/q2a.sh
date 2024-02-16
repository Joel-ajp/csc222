#!/bin/bash
# Name(s): Joel Porter
# Date: 2.15.24
# Description: Part q2a of the lab

read -p "Directory to scan for messages: " dir

if [ -d $dir ]; then
    dirString=`ls $dir -lv | awk '{print $1}'`
    gcc q2b.c -o q2b
    ./q2b $dirString
else
    echo Please enter a valid directory
fi