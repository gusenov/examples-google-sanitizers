#!/usr/bin/env bash

EXE_FILE="./a.out"

[ -f "$EXE_FILE" ] && rm "$EXE_FILE"

export PATH="/usr/local/opt/llvm/bin:$PATH"
which clang

clang++ --std=c++17 \
    -fsanitize=address \
    -fsanitize-blacklist=blacklist.txt \
main.cc -o "$EXE_FILE" \
  && ASAN_OPTIONS=detect_leaks=1 \
     LSAN_OPTIONS=suppressions=suppr.txt \
     "$EXE_FILE"
