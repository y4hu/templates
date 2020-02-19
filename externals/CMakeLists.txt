cmake_minimum_required(VERSION 3.2)

add_subdirectory(fmt)

add_subdirectory(gtest)

set_target_properties(gtest PROPERTIES FOLDER extern)
set_target_properties(gtest_main PROPERTIES FOLDER extern)
set_target_properties(gmock PROPERTIES FOLDER extern)
set_target_properties(gmock_main PROPERTIES FOLDER extern)

add_subdirectory(benchmark)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "Suppressing benchmark's tests" FORCE)
set_target_properties(benchmark PROPERTIES BENCHMARK_ENABLE_INSTALL OFF)

