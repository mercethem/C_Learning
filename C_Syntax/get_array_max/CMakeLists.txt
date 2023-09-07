cmake_minimum_required(VERSION 3.23)
project (get_array_max C)

set(CMAKE_C_STANDARD 11)

add_executable(get_array_max main.c mylibrary.h mylibrary.c)
