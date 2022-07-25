Cmake_minimum_required(VERSION 3.16)

project(ticktac VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standart_project_setup()

add_subdirectory(src/app)
