cmake_minimum_required(VERSION 3.23)
project(TP_Lab_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        main
        "Source Files/main.cpp"
        "Header Files/Animal.h"
        "Header Files/Keeper.h"
        "Source Files/Keeper.cpp"
        "Source Files/Fish.cpp"
        "Header Files/Fish.h"
        "Source Files/Bird.cpp"
        "Header Files/Bird.h"
        "Source Files/Cat.cpp"
        "Header Files/Cat.h")

target_include_directories(main PUBLIC "Header Files")

