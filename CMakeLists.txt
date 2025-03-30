cmake_minimum_required(VERSION 3.10)
project(RENT LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# Додаємо ВСІ вихідні файли
add_executable(RENT
    src/main.cpp
    src/rent.cpp  # Цей рядок обов'язковий!
)

if(WIN32)
    target_compile_definitions(RENT PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()