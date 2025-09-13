#!/bin/bash

#provera da li je instaliran
if ! command -v cppcheck &> /dev/null; then
    echo "Potrebno je instalirati Cppcheck"
    exit 1
fi

PROJECT_DIR="../MATFWars/MATFWars/src"
RESULT_FILE="$(dirname "$0")/result.txt"

echo "Pokretanje Cppcheck-a"

cppcheck --enable=all \
         --inconclusive \
         --suppress=missingInclude \
         --report-progress \
         --xml "$PROJECT_DIR" \
         &> "$RESULT_FILE"

echo "Rezultat izvrsavanja je u $RESULT_FILE"


