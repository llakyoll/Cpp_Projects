cmake_minimum_required(VERSION 3.10)

# Project Name
project(main)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Includes 
include_directories(include)

# Source Files
set(SOURCE 
    src/main.cpp
    src/save.cpp
)

# Executeable
add_executable(main ${SOURCE})
