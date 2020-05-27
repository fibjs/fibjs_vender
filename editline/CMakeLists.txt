cmake_minimum_required(VERSION 2.6)

add_definitions(-DSYS_UNIX -DHAVE_STDLIB -DANSI_ARROWS -DUNIQUE_HISTORY -DHAVE_TCGETATTR)

include(../tools/Library.cmake)
