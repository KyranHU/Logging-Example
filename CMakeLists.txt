cmake_minimum_required(VERSION 3.18)
project(Logger)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main src/main.cc)

target_sources(main PRIVATE src/Logger.cc PRIVATE src/Logger.hh)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(ENABLE_LOGGING)
endif()