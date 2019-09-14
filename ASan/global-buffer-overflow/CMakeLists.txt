cmake_minimum_required(VERSION 3.14)
project(global-buffer-overflow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer -O1")

add_executable(
        global-buffer-overflow
        main.cpp
)
