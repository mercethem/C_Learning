cmake_minimum_required(VERSION 3.23)
project(reverse_copy_array C)

set(CMAKE_C_STANDARD 11)

add_executable(reverse_copy_array main.c mylibrary.c mylibrary.h)
