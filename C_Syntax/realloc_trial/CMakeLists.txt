cmake_minimum_required(VERSION 3.26)
project(realloc_trial C)

set(CMAKE_C_STANDARD 11)

add_executable(realloc_trial main.c mylibrary.h mylibrary.c)
