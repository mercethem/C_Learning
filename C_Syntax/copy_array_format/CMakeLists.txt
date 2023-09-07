cmake_minimum_required(VERSION 3.23)
project(copy_array_format C)

set(CMAKE_C_STANDARD 11)

add_executable(copy_array_format main.c mylibrary.h mylibrary.c)
