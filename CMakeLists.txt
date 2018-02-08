cmake_minimum_required(VERSION 2.8)

set(SOURCE_EXE verify.cpp)

add_library(gmp STATIC mini-gmp.c)

add_executable(verify verify.cpp)

target_link_libraries(verify gmp)