cmake_minimum_required(VERSION 3.2)                                                                                                                                                                                                       
macro(package_add_test TESTNAME)
    add_executable(${TESTNAME} ${ARGN})
    #to test some lib
    #target_link_libraries(${TESTNAME} libname)
    target_link_libraries(${TESTNAME} gtest gmock gtest_main)
    add_test(NAME ${TESTNAME} COMMAND ${TESTNAME})
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
    # for VSCode test explorer
    set_target_properties(${TESTNAME} PROPERTIES OUTPUT_NAME ${TESTNAME}_test)
endmacro()

macro(package_add_bench BENCHNAME)
    add_executable(${BENCHNAME} ${ARGN})
    #target_link_libraries(${BENCHNAME} libname)
    target_link_libraries(${BENCHNAME} benchmark)
    set_target_properties(${BENCHNAME} PROPERTIES OUTPUT_NAME ${BENCHNAME}_bench)
endmacro()

package_add_test(template_tests template_tests.cpp)
