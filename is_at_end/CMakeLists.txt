cmake_minimum_required(VERSION 3.23)
project(is_at_end C)

set(CMAKE_C_STANDARD 11)

add_executable(is_at_end main.c mylibrary.h mylibrary.c)
