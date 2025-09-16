#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <dir> <style>"
    exit 1
fi

DIR="$1"
STYLE="$2"

#prolazak kroz sve fajlove i formatiranje
find "$DIR" \( -name "*.h" -o -name "*.c" -o -name "*.hpp" -o -name "*.cpp" \) \
    -exec clang-format -i -style="$STYLE" {} +

echo "Formatiranje zavrseno u folderu: $DIR sa stilom: $STYLE"
