cmake_minimum_required(VERSION 3.26)
project(self_referential_structure_for_data_types C)

set(CMAKE_C_STANDARD 11)

add_executable(self_referential_structure_for_data_types main.c mylibrary.c mylibrary.h student.h student.c
date.h date.c)
