cmake_minimum_required(VERSION 3.5)

include_directories(
    ${PROJECT_SOURCE_DIR}/include/rtc
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/../openssl/include
    ${PROJECT_SOURCE_DIR}/../juice/include
    ${PROJECT_SOURCE_DIR}/../usrsctp/include
)

add_definitions(
    -DRTC_STATIC
    -DJUICE_STATIC
    -DRTC_ENABLE_MEDIA=0
    -DRTC_ENABLE_WEBSOCKET=0
)

include(../build_tools/cmake/Library.cmake)
