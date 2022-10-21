cmake_minimum_required(VERSION 3.5)

project(Game_of_Chance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Game_of_Chance main.cpp)

install(TARGETS Game_of_Chance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
