cmake_minimum_required(VERSION 3.23)
project(pointer_to_pointer_call_by_reference2 C)

set(CMAKE_C_STANDARD 11)

add_executable(pointer_to_pointer_call_by_reference2 main.c mylibrary.c mylibrary.h)
