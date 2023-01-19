cmake_minimum_required(VERSION 2.6)

set(test_libs v8 exlib gtest unicode)

include(../../v8/cmake/options.cmake)

include(../../build_tools/cmake/LibraryTest.cmake)
