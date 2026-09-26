cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

add_definitions(
	-DSQLITE_THREADSAFE=2
	-DHAVE_GETHOSTUUID=0
    -DSQLITE_ENABLE_FTS5
)

include(../build_tools/cmake/Library.cmake)