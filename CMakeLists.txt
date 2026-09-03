cmake_minimum_required(VERSION 3.10)
project(cpp_deitel_5ed)

set(CMAKE_CXX_STANDARD 23)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adiciona as flags de compilação
add_compile_options(-Wall -Wextra -pedantic-errors)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/resources/ed5.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/resources)

add_executable(teste testes/teste.cpp)
add_executable(programa 08/fig08_07.cpp)