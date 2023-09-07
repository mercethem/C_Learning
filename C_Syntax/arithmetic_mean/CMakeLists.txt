cmake_minimum_required(VERSION 3.23)
project(arithmetic_mean C)

set(CMAKE_C_STANDARD 11)

add_executable(arithmetic_mean main.c mylibrary.h mylibrary.c)
