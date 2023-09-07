cmake_minimum_required(VERSION 3.23)
project(string_length C)

set(CMAKE_C_STANDARD 11)

add_executable(string_length main.c mylibrary.h mylibrary.c)
