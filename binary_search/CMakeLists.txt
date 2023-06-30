cmake_minimum_required(VERSION 3.23)
project(binary_search C)

set(CMAKE_C_STANDARD 11)

add_executable(binary_search main.c mylibrary.c mylibrary.h)
