cmake_minimum_required(VERSION 3.14)
project(code-that-produces-data-races)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -fPIE -pie -g")

add_executable(
        code-that-produces-data-races
        main.cpp
)
