cmake_minimum_required(VERSION 2.8.9)

project("HttpServer")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(INCLUDE_DIR include/)
include_directories(${INCLUDE_DIR})

add_executable(HttpServer src/http-server.c)
