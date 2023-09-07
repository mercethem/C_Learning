cmake_minimum_required(VERSION 3.23)
project(array_control C)

set(CMAKE_C_STANDARD 11)

add_executable(array_control main.c mylibrary.h mylibrary.c)
