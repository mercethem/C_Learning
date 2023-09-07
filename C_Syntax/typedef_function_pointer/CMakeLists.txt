cmake_minimum_required(VERSION 3.23)
project (typedef_function_pointer C)

set(CMAKE_C_STANDARD 11)

add_executable(typedef_function_pointer main.c mylibrary.c mylibrary.h)
