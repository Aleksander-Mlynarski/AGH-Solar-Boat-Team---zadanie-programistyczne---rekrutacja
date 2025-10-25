cmake_minimum_required(VERSION 3.10)

project(Transformacja)

add_executable(transformacja_exe
        main.cpp
        src/zadanie.cpp
)

target_include_directories(transformacja_exe
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
