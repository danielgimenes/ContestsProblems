#!/bin/sh

g++ solution.cpp -o out.o &&
echo 'expected output:' &&
cat output &&
echo 'solution output:' &&
./out.o < input

