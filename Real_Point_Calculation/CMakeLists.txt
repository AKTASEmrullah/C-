cmake_minimum_required(VERSION 3.5)

project(Real_Point_Calculation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Real_Point_Calculation main.cpp)

install(TARGETS Real_Point_Calculation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
