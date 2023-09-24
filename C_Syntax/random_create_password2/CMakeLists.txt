cmake_minimum_required(VERSION 3.26)
project(random_create_password2 C)

set(CMAKE_C_STANDARD 11)

add_executable(random_create_password2 main.c mylibrary.h mylibrary.c)
