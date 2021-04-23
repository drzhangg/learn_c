cmake_minimum_required(VERSION 3.19)
project(sublime_c C)

set(CMAKE_C_STANDARD 11)

add_executable(sublime_c
        demo1/h.c
        demo2/hello.c demo2/sushu.c demo2/给定条件的整数集.c)
