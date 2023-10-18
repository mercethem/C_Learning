cmake_minimum_required(VERSION 3.26)
project(my_date_library C)

set(CMAKE_C_STANDARD 11)

add_executable(my_date_library main.c date.h date.c mylibrary.h mylibrary.c)
