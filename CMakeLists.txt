cmake_minimum_required(VERSION 3.16)
project(ElectrodynamicsSimulation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/core/math)
add_subdirectory(lib/core/simulation)

set(SOURCES
    src/main.cpp
)

add_executable(app ${SOURCES})

target_include_directories(app PRIVATE src)

target_link_libraries(
    app
    PRIVATE
    vector3
    particle
)

option(ENABLE_TESTING "Enable tests" ON)
if (ENABLE_TESTING)
    enable_testing()
    find_package(Catch2 3 REQUIRED)
    
    set(TEST_SOURCES
        lib/core/math/tests/test_vector3.cpp
    )
    add_executable(test_all ${TEST_SOURCES})
    target_link_libraries(test_all PRIVATE vector3 Catch2::Catch2WithMain)

    add_test(NAME TestAll COMMAND test_all)
endif()

