cmake_minimum_required(VERSION 3.20)
project(ctest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

set(SOURCES
    src/main.cpp
    src/core/entity/entity.cpp
    src/utils/render/render.cpp
)

add_executable(app ${SOURCES})

target_include_directories(app PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(app PRIVATE SFML::Graphics SFML::Window SFML::System)