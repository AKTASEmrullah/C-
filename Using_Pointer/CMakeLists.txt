cmake_minimum_required(VERSION 3.5)

project(Using_Pointer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Using_Pointer main.cpp)

install(TARGETS Using_Pointer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
