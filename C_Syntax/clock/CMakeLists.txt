cmake_minimum_required(VERSION 3.26)
project(clock C)

set(CMAKE_C_STANDARD 11)

add_executable(clock main.c mylibrary.h mylibrary.c)
