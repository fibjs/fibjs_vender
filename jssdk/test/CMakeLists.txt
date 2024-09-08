cmake_minimum_required(VERSION 3.5)

set(test_libs v8 exlib gtest unicode abseil)

include(../../v8/cmake/options.cmake)

include(../../build_tools/cmake/LibraryTest.cmake)
