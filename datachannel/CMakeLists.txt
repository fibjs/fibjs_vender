cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

include_directories(
    ${PROJECT_SOURCE_DIR}/include/rtc
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/../openssl/include
    ${PROJECT_SOURCE_DIR}/../juice/include
    ${PROJECT_SOURCE_DIR}/../usrsctp/include
)

include(../build_tools/cmake/Library.cmake)

# datachannel is built and linked statically, without media and websocket
# support. These definitions are part of the library's public contract: its
# headers map the API to dllimport on Windows unless RTC_STATIC is defined, and
# the feature macros decide what the headers declare. Consumers that link the
# target inherit them; fibjs_core compiles against the headers without linking
# the vender targets, so it repeats the same list in fibjs/CMakeLists.txt.
target_compile_definitions(${lib_name} PUBLIC
    RTC_STATIC
    JUICE_STATIC
    RTC_ENABLE_MEDIA=0
    RTC_ENABLE_WEBSOCKET=0
)
