cmake_minimum_required(VERSION 3.10.0 FATAL_ERROR)

project(UNARY)
add_executable(${PROJECT_NAME} "src/main.cpp")
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)