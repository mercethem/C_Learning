cmake_minimum_required(VERSION 3.23)
project(qsort C)

set(CMAKE_C_STANDARD 11)

add_executable(qsort main.c mylibrary.h mylibrary.c)
