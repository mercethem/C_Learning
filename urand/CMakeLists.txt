cmake_minimum_required(VERSION 3.23)
project(urand C)

set(CMAKE_C_STANDARD 11)

add_executable(urand main.c mylibrary.c mylibrary.h)
