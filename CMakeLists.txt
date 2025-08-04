cmake_minimum_required(VERSION 3.16)
project(ElectrodynamicsSimulation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_library(glad STATIC external/glad/src/glad.c)
target_include_directories(glad PUBLIC external/glad/include)

set(SOURCES
    src/main.cpp
)

add_executable(app ${SOURCES})

target_include_directories(app PRIVATE src)

target_link_libraries(
    app
    PRIVATE
    glad
    glfw
    OpenGL::GL
)

