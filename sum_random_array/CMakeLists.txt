cmake_minimum_required(VERSION 3.23)
project(sum_random_array C)

set(CMAKE_C_STANDARD 11)

add_executable(sum_random_array main.c mylibrary.c mylibrary.h)
