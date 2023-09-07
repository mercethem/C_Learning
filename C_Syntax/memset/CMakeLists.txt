cmake_minimum_required(VERSION 3.23)
project(memset C)

set(CMAKE_C_STANDARD 11)

add_executable(memset main.c mylibrary.c mylibrary.h)
