cmake_minimum_required(VERSION 3.23)
project(pointer_to_pointer_pointer_array C)

set(CMAKE_C_STANDARD 11)

add_executable(pointer_to_pointer_pointer_array main.c mylibrary.h mylibrary.c)
