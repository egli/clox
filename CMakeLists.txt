cmake_minimum_required(VERSION 3.24)
project(clox VERSION 0.0.1)

SET(CMAKE_COLOR_MAKEFILE OFF)

add_executable(clox
  src/chunk.c
  src/debug.c
  src/memory.c
  src/value.c
  src/main.c
)
