cmake_minimum_required(VERSION 3.23)
project(binary_search_algorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(binary_search_algorithm main.c mylibrary.h mylibrary.c)
