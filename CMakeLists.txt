cmake_minimum_required(VERSION 3.12)

# set the project name
project(embedded-c-project-template VERSION 0.1.0 LANGUAGES C)

add_subdirectory(include)
add_subdirectory(source)

# set target as bare metal
set(CMAKE_SYSTEM_NAME Generic)