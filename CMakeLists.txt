cmake_minimum_required(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
project(JenkinsExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/mehmetaksu/Qt/6.2.1/macos/")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

include_directories(include)
add_executable(JenkinsExample include/hello_word.hpp src/hello_word.cpp src/main.cpp)
target_link_libraries(JenkinsExample
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

set(CMAKE_OSX_DEPLOYMENT_TARGET "11")
set(CMAKE_OSX_ARCHITECTURES "arm64")

include(CTest)
add_subdirectory(test)
message("CMAKE_BUILD_TOOL Path : " ${CMAKE_BUILD_TOOL})
