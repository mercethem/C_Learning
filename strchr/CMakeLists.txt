cmake_minimum_required(VERSION 3.23)
project(strchr C)

set(CMAKE_C_STANDARD 11)

add_executable(strchr main.c mylibrary.h mylibrary.c)
