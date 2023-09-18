cmake_minimum_required(VERSION 3.23)
project(matrix_with_pointer C)

set(CMAKE_C_STANDARD 11)

add_executable(matrix_with_pointer main.c mylibrary.c mylibrary.h)
