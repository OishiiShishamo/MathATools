#!/bin/bash

# ソースファイルの決定
SOURCE_FILE="${1:-main}.cpp" # 引数が無い場合はmain.cppを使用

# コンパイルオプションの決定
CXX_FLAGS="-std=gnu++20 -O2 -Wall -Wextra"
LINK_FLAGS=""

# 第二引数に"debug"を指定でコンパイルオプションを追加
if [ "$2" == "debug" ]; then
    CXX_FLAGS+=" -fsanitize=address -fsanitize=undefined"
fi

# コンパイル実行
g++ $CXX_FLAGS "$SOURCE_FILE" -o ${1:-main}.bin $LINK_FLAGS
