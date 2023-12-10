cmake_minimum_required(VERSION 3.24)
project(clox VERSION 0.0.1)

SET(CMAKE_COLOR_MAKEFILE OFF)

add_executable(clox
  src/chunk.c
  src/scanner.c
  src/compiler.c
  src/debug.c
  src/value.c
  src/object.c
  src/table.c
  src/memory.c
  src/vm.c
  src/main.c
)
