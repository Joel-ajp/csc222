#!/bin/bash

hello() {
    echo "Hello function"
    echo "Exiting hello function"
}

echo "Before hello"
hello
echo "After hello"