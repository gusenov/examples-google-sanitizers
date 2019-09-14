cmake_minimum_required(VERSION 3.14)
project(code-with-uninit-read)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory -fPIE -pie -fno-omit-frame-pointer -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-optimize-sibling-calls")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O1")

add_executable(
        code-with-uninit-read
        main.cpp
)
