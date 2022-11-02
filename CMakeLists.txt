cmake_minimum_required(VERSION 3.23)
project(ICT2104_B1_MappingAndNavigation C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ICT2104_B1_MappingAndNavigation
        graph.c
        graph.h
        main.c)
