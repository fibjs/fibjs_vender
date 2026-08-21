cmake_minimum_required(VERSION 3.10)

# Test suite for umysql. Follows the same pattern as exlib/test and openssl/test:
# - test_libs: libs linked after the library under test
# - umysql itself is a pure C++ lib (no exlib/fibjs deps), so tests can run
#   standalone with a mocked CAPI socket layer.
set(test_libs gtest openssl exlib)

# Prefer src/ headers (they are the up-to-date copies used by Connection.cpp)
include_directories(
    ${PROJECT_SOURCE_DIR}/../src
    ${PROJECT_SOURCE_DIR}/../include
    ${PROJECT_SOURCE_DIR}/../../openssl/include
)

include(../../build_tools/cmake/LibraryTest.cmake)
