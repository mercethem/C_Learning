cmake_minimum_required(VERSION 3.23)
project(free C)

set(CMAKE_C_STANDARD 11)

add_executable(free main.c mylibrary.h mylibrary.c)
