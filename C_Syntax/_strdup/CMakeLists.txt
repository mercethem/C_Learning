cmake_minimum_required(VERSION 3.23)
project(_strdup C)

set(CMAKE_C_STANDARD 11)

add_executable(_strdup main.c mylibrary.h mylibrary.c)
