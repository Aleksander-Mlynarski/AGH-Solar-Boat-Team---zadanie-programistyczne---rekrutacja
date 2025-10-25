cmake_minimum_required(VERSION 3.10)

project(Transformacja)

# Tworzymy plik wykonywalny - pełne ścieżki do .cpp
add_executable(transformacja_exe
        main.cpp
        src/zadanie.cpp
)

# Dodajemy katalog include do ścieżki nagłówków
target_include_directories(transformacja_exe
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
