# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(CPP_RPG VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Add executable
add_executable(CPP_RPG ${SOURCES})

# Add include directories if needed
target_include_directories(CPP_RPG PRIVATE ${PROJECT_SOURCE_DIR}/include)