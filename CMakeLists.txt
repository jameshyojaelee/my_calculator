cmake_minimum_required(VERSION 2.8.12)
project(scientific_calculator)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# === src dependencies ===
include_directories(subprojects/cxxopts)
# === end src dependencies ===

add_subdirectory(src)

# === test dependencies ===
#enable_testing()
#add_subdirectory(subprojects/googletest-release-1.8.1)
# === end test dependencies ===

#add_subdirectory(test)
