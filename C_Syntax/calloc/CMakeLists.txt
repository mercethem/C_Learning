cmake_minimum_required(VERSION 3.23)
project(calloc C)

set(CMAKE_C_STANDARD 11)

add_executable(calloc main.c mylibrary.c mylibrary.h)
