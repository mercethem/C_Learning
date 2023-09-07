cmake_minimum_required(VERSION 3.23)
project(strstr C)

set(CMAKE_C_STANDARD 11)

add_executable(strstr main.c mylibrary.c mylibrary.h)
