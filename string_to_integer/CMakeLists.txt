cmake_minimum_required(VERSION 3.23)
project(string_to_integer C)

set(CMAKE_C_STANDARD 11)

add_executable(string_to_integer main.c mylibrary.h mylibrary.c)
