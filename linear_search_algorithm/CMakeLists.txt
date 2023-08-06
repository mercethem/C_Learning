cmake_minimum_required(VERSION 3.23)
project(linear_search_algorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(linear_search_algorithm main.c mylibrary.c mylibrary.h)
