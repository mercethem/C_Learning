cmake_minimum_required(VERSION 3.23)
project(copy_array C)

set(CMAKE_C_STANDARD 11)

add_executable(copy_array main.c mylibrary.c mylibrary.h)
