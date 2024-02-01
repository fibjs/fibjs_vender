cmake_minimum_required(VERSION 3.5)

set(test_libs openssl)

include_directories(
    ${PROJECT_SOURCE_DIR}/../include
)

include(../../build_tools/cmake/LibraryTest.cmake)
