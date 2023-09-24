cmake_minimum_required(VERSION 3.26)
project(random_create_password C)

set(CMAKE_C_STANDARD 11)

add_executable(random_create_password main.c mylibrary.c mylibrary.h)
