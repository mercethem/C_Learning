cmake_minimum_required(VERSION 3.26)
project(handle C)

set(CMAKE_C_STANDARD 11)

add_executable(handle main.c studentlist.h studentlist.c date.c date.h mylibrary.c mylibrary.h student.c student.h)
