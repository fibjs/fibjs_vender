cmake_minimum_required(VERSION 3.5)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

include_directories(${GTK_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/../dbusmenu)
include_directories(${PROJECT_SOURCE_DIR}/../indicator)

add_definitions(-DHAVE_CONFIG_H -D_GLIB_TEST_OVERFLOW_FALLBACK)

include(../build_tools/cmake/Library.cmake)