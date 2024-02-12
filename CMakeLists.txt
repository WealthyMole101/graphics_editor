cmake_minimum_required(VERSION 3.5)

project(graphics_editor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(graphics_editor main.cpp
    document.h document.cpp
    graphic_primitive.h graphic_primitive.cpp
    rectangle.h rectangle.cpp
    triangle.h triangle.cpp
    square.h square.cpp
    circle.h circle.cpp
    graphic_view.h graphic_view.cpp)
