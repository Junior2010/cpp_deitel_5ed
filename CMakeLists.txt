cmake_minimum_required(VERSION 3.10)

project(cpp_deitel_5ed LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(COPY
        "${CMAKE_CURRENT_SOURCE_DIR}/resources/ed5.txt"
        DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/resources"
)

add_executable(programa
        08/fig08_15.cpp
)

if(MSVC)
    target_compile_options(programa PRIVATE
            /W4
            /WX
    )
else()
    target_compile_options(programa PRIVATE
            -Wall
            -Wextra
            -Wpedantic
            -Werror
    )
endif()