cmake_minimum_required(VERSION 3.23)
project(bubble_sort C)

set(CMAKE_C_STANDARD 99)

add_executable(bubble_sort main.c mylibrary.h mylibrary.c)
