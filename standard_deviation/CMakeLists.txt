cmake_minimum_required(VERSION 3.23)
project(standard_deviation C)

set(CMAKE_C_STANDARD 11)

add_executable(standard_deviation main.c mylibrary.c mylibrary.h)
