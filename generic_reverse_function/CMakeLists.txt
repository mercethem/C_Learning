cmake_minimum_required(VERSION 3.23)
project(generic_reverse_function C)

set(CMAKE_C_STANDARD 11)

add_executable(generic_reverse_function main.c mylibrary.c mylibrary.h)
