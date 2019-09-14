#!/usr/bin/env bash


# clang -fsanitize=address -g mleak.c; ASAN_OPTIONS=detect_leaks=1 ./a.out

# ==11499==AddressSanitizer: detect_leaks is not supported on this platform.
# ./build-and-run.sh: line 3: 11499 Abort trap: 6           ASAN_OPTIONS=detect_leaks=1 ./a.out


export PATH="/usr/local/opt/llvm/bin:$PATH"
which clang

# https://discourse.brew.sh/t/clang-can-no-longer-find-usr-include-header-files-fatal-error-stdlib-h-file-not-found/4523
# clang -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include \
#     -fsanitize=address -g mleak.c \
#     && ASAN_OPTIONS=detect_leaks=1 ./a.out

clang \
    -fsanitize=address -g mleak.c \
    && ASAN_OPTIONS=detect_leaks=1 ./a.out
