add_library(particle STATIC src/particle.cpp)
target_include_directories(particle PUBLIC include)
target_link_libraries(particle PRIVATE vector3)