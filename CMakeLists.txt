cmake_minimum_required(VERSION 3.10)
project(MyCppProject)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # optional but nice

add_executable(MyCppProject
    src/black_scholes.cpp
    src/main.cpp
)
target_include_directories(MyCppProject PRIVATE ${CMAKE_SOURCE_DIR}/include)
if (MSVC)
    target_compile_options(MyCppProject PRIVATE /W4 /permissive-)
else()
    target_compile_options(MyCppProject PRIVATE -Wall -Wextra -Wpedantic)
endif()
