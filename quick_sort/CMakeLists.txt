cmake_minimum_required(VERSION 3.23)
project(quick_sort C)

set(CMAKE_C_STANDARD 11)

add_executable(quick_sort main.c mylibrary.h mylibrary.c)
