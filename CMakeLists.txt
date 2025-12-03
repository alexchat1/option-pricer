cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # optional but nice

add_executable(MyCppProject
    src/main.cpp
)
