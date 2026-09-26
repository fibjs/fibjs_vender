cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_dir ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
get_filename_component(lib_name ${lib_dir} NAME)
project(${lib_name}_test)

set(test_libs openssl exlib)

include_directories(
    ${PROJECT_SOURCE_DIR}/../include
)

include(../../build_tools/cmake/LibraryTest.cmake)
