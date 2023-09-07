cmake_minimum_required(VERSION 3.23)
project(selection_sort C)

set(CMAKE_C_STANDARD 11)

add_executable(selection_sort main.c mylibrary.c mylibrary.h)
