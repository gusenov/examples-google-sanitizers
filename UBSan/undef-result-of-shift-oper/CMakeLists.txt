cmake_minimum_required(VERSION 3.14)
project(undef-result-of-shift-oper)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined")

# Альтернативный вариант:
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=shift -fno-sanitize-recover")

add_executable(
        undef-result-of-shift-oper
        main.cpp
)
