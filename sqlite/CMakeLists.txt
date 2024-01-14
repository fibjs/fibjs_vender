cmake_minimum_required(VERSION 3.5)

add_definitions(
	-DSQLITE_THREADSAFE=2
	-DHAVE_GETHOSTUUID=0
)

include(../build_tools/cmake/Library.cmake)