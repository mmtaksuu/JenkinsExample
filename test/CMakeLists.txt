cmake_minimum_required(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
project(JenkinsExampleTest)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_SOURCE_DIR ../src)
set(CMAKE_INCLUDE_DIR ../include)

add_executable(${PROJECT_NAME} hello_word_test.cpp
        ${CMAKE_INCLUDE_DIR}/hello_word.hpp
        ${CMAKE_SOURCE_DIR}/hello_word.cpp)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR})

enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
