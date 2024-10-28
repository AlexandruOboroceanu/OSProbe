cmake_minimum_required(VERSION 3.29)
project(ConsoleApplication1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ConsoleApplication1
    ConsoleAplication1.cpp
    memory_commit.h
    number_of_logical_procesors.h
    "number_of_running processes.h"
    page_size.h
    total_available_phys_n_virtual_memory.h)
