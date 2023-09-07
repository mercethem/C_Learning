cmake_minimum_required(VERSION 3.23)
project(reverse_array C)

set(CMAKE_C_STANDARD 11)

add_executable(reverse_array main.c mylibrary.c mylibrary.h)
