cmake_minimum_required(VERSION 3.23)
project(strcpy C)

set(CMAKE_C_STANDARD 11)

add_executable(strcpy main.c mylibrary.c mylibrary.h)
