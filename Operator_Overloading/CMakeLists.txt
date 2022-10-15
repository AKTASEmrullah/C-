cmake_minimum_required(VERSION 3.5)

project(Operator_Overloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Operator_Overloading main.cpp)

install(TARGETS Operator_Overloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
