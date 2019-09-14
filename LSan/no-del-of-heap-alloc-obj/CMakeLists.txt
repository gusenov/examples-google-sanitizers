cmake_minimum_required(VERSION 3.14)
project(no-del-of-heap-alloc-obj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak")

add_executable(
        no-del-of-heap-alloc-obj
        main.cpp
)
