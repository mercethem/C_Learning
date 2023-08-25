cmake_minimum_required(VERSION 3.23)
project(generic_fill_array C)

set(CMAKE_C_STANDARD 11)

add_executable(generic_fill_array main.c mylibrary.c mylibrary.h)
