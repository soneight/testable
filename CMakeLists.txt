cmake_minimum_required(VERSION 3.14...3.28)

project(testable VERSION 0.0.0 LANGUAGES CXX)

set(SON8PROJ son8__${PROJECT_NAME})

include(FetchContent)

enable_testing()
add_subdirectory(source)
