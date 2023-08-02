cmake_minimum_required(VERSION 3.23)
project(insertion_sort_algorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(insertion_sort_algorithm main.c mylibrary.c mylibrary.h)
