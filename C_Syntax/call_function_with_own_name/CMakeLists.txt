cmake_minimum_required(VERSION 3.23)
project(call_function_with_own_name C)

set(CMAKE_C_STANDARD 11)

add_executable(call_function_with_own_name main.c mylibrary.h mylibrary.c)
