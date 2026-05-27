cmake_minimum_required(VERSION 3.10)

add_definitions(
	-DSQLITE_THREADSAFE=2
	-DSQLITE_ENABLE_UNLOCK_NOTIFY=1
	-DHAVE_GETHOSTUUID=0
)

include(../build_tools/cmake/Library.cmake)