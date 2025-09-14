#!/bin/bash

program=../MATFWars_clone/build/MATFWars

massif_file="result.txt"
ms_print_file="result_ms_print.txt"

valgrind --tool=massif --massif-out-file=$massif_file ./$program

#citljiviji izlaz
ms_print $massif_file > $ms_print_file