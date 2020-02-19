cmake_minimum_required(VERSION 3.12)

add_executable(template main.cpp)
target_compile_options(template PRIVATE -Wall -Wextra)
target_link_libraries(template PRIVATE fmt-header-only)
