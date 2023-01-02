cmake_minimum_required(VERSION 2.6)

set(test_libs gtest)
set(libs v8 exlib)

include_directories("${PROJECT_SOURCE_DIR}/../../v8/include")

include(../../build_tools/cmake/LibraryTest.cmake)
