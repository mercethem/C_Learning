cmake_minimum_required(VERSION 3.26)
project(linkage C)

set(CMAKE_C_STANDARD 11)

add_executable(linkage main.c mylibrary.c mylibrary.h)
