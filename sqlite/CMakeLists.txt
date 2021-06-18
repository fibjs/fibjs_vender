cmake_minimum_required(VERSION 2.6)

add_definitions(
	-DSQLITE_ENABLE_FTS5=1
	-DSQLITE_THREADSAFE=2
)

include(../build_tools/cmake/Library.cmake)