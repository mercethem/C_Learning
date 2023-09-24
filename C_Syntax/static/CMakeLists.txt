cmake_minimum_required(VERSION 3.26)
project(static C)

set(CMAKE_C_STANDARD 11)

add_executable(static main.c mylibrary.c mylibrary.h)
