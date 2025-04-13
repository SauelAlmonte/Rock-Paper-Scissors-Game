cmake_minimum_required(VERSION 3.30)
project(RockPaperScissorsGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(RockPaperScissorsGame main.cpp
        game_header.h
        game_definition.cpp)
