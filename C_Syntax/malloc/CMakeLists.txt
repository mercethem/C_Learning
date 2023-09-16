cmake_minimum_required(VERSION 3.23)
project(malloc C)

set(CMAKE_C_STANDARD 11)

add_executable(malloc main.c mylibrary.h mylibrary.c)
