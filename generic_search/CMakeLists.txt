cmake_minimum_required(VERSION 3.23)
project(generic_search C)

set(CMAKE_C_STANDARD 11)

add_executable(generic_search main.c mylibrary.h mylibrary.c)
