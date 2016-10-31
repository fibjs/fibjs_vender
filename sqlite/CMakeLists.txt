cmake_minimum_required(VERSION 2.6)

add_definitions(
	-DSQLITE_ENABLE_FTS4=1
	-DSQLITE_DEFAULT_SYNCHRONOUS=1
	-DSQLITE_THREADSAFE=2
)

include(../tools/basic.cmake)