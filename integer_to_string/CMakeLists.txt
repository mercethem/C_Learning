cmake_minimum_required(VERSION 3.23)
project(integer_to_string C)

set(CMAKE_C_STANDARD 11)

add_executable(integer_to_string main.c mylibrary.c mylibrary.h)
