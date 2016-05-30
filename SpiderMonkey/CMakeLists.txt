cmake_minimum_required(VERSION 2.6)

add_definitions(-DSTATIC_JS_API -DXP_UNIX=1 -DJS_THREADSAFE=1 -DHAVE_VA_COPY=1 -DVA_COPY=va_copy)

include_directories("${PROJECT_SOURCE_DIR}/../exlib/include/")

include(../tools/basic.cmake)
