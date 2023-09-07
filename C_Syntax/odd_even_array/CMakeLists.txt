cmake_minimum_required(VERSION 3.23)
project(odd_even_array C)

set(CMAKE_C_STANDARD 11)

add_executable(odd_even_array main.c mylibrary.c mylibrary.h)
