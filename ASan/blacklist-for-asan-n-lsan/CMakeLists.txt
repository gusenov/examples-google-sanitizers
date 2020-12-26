cmake_minimum_required(VERSION 3.14)
project(ASanBlacklist)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer -O0 -fsanitize-blacklist=${PROJECT_SOURCE_DIR}/blacklist.txt")

add_executable(ASanBlacklist main.cc)
