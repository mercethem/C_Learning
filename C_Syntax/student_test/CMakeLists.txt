cmake_minimum_required(VERSION 3.26)
project(student_test C)

set(CMAKE_C_STANDARD 11)

add_executable(student_test main.c mylibrary.h mylibrary.c date.h date.c student.h student.c)
