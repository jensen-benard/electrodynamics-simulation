cmake_minimum_required(VERSION 3.16)
project(ElectrodynamicsSimulation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

set(SOURCES
    src/glad.c
    src/main.cpp
)


add_executable(app ${SOURCES})

target_include_directories(app PRIVATE include)

target_link_libraries(
    app
    PRIVATE
    glfw
    OpenGL::GL
)

