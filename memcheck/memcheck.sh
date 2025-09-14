#!/bin/bash

PROGRAM="../MATFWars_clone/build/MATFWars"
FILE="result.txt"
valgrind --leak-check=summary --suppressions=valgrind_supressions.supp --track-origins=yes --log-file=$FILE $PROGRAM
#--gen-suppressions=all
echo "Memcheck je završen"
