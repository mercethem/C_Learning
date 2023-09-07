cmake_minimum_required(VERSION 3.23)
project(strpbrk C)

set(CMAKE_C_STANDARD 11)

add_executable(strpbrk main.c mylibrary.h mylibrary.c)
