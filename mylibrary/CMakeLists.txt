cmake_minimum_required(VERSION 3.23)
project(mylibrary C)

set(CMAKE_C_STANDARD 11)

add_executable(mylibrary main.c mylibrary.h mylibrary.c)
