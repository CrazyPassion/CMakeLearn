cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(testclass)

aux_source_directory(. DIR_SRCS)

add_executable(test test.cpp)

target_link_libraries(test testclass)
