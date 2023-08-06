cmake_minimum_required(VERSION 3.23)
project(strlen C)

set(CMAKE_C_STANDARD 11)

add_executable(strlen main.c mylibrary.c mylibrary.h)
