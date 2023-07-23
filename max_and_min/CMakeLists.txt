cmake_minimum_required(VERSION 3.23)
project(max_and_min C)

set(CMAKE_C_STANDARD 11)

add_executable(max_and_min main.c mylibrary.c mylibrary.h)
