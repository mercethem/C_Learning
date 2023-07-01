cmake_minimum_required(VERSION 3.23)
project(strings C)

set(CMAKE_C_STANDARD 11)

add_executable(strings main.c mylibrary.c mylibrary.h)
