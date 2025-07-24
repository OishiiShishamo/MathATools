@echo off
setlocal enabledelayedexpansion

:: ソースファイルの決定（引数が無い場合は main.cpp）
set "SOURCE_FILE=%~1"
if "%SOURCE_FILE%"=="" set "SOURCE_FILE=main"

:: コンパイルオプションの決定
set "CXX_FLAGS=-std=gnu++20 -O2 -Wall -Wextra"
set "LINK_FLAGS="

:: 第二引数に "debug" があればオプション追加
if /i "%~2"=="debug" (
    set "CXX_FLAGS=!CXX_FLAGS! -fsanitize=address -fsanitize=undefined"
)
)

:: コンパイル実行
g++ !CXX_FLAGS! "%SOURCE_FILE%.cpp" -o %SOURCE_FILE% !LINK_FLAGS!
