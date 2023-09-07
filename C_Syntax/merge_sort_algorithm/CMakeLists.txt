cmake_minimum_required(VERSION 3.23)
project(merge_sort_algorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(merge_sort_algorithm main.c mylibrary.c mylibrary.h)
