cmake_minimum_required(VERSION 3.23)
project(malloc_trial C)

set(CMAKE_C_STANDARD 11)

add_executable(malloc_trial main.c mylibrary.c mylibrary.h)
