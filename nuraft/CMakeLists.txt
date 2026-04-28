cmake_minimum_required(VERSION 3.10)

add_definitions(
    -DASIO_STANDALONE
)

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/libnuraft
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/../asio/include
    ${PROJECT_SOURCE_DIR}/../openssl/include
)

include(../build_tools/cmake/Library.cmake)