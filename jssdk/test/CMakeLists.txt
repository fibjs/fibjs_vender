cmake_minimum_required(VERSION 2.6)

set(test_libs gtest)
set(libs v8 exlib)

include(../../v8/cmake/options.cmake)

include(../../build_tools/cmake/LibraryTest.cmake)
