cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# zstd 1.5.7, static library (lib/common + lib/compress + lib/decompress).
#
# Only the library sources are vendored: programs/, tests/, contrib/,
# zlibWrapper/, dictBuilder/ and legacy/ are not, so `libzstd.a` carries the
# plain compress/decompress API this tree needs (ZSTD_compress,
# ZSTD_decompress, the streaming contexts, ZSTD_CCtx_setParameter).  The
# source list comes from option_src.cmake's glob like every other vender
# library.
#
# Upstream provenance: https://github.com/facebook/zstd tag v1.5.7, files
# lib/{zstd.h,zdict.h,zstd_errors.h} and lib/{common,compress,decompress}/*.

# zstd's own sources include each other and the public headers through paths
# relative to lib/ (for example "../zstd.h"), so lib/ has to be on the include
# path. The public headers live there exactly as upstream ships them.
include_directories(${PROJECT_SOURCE_DIR}/lib)

# Multi-threaded compression (ZSTDMT) is what the Node.js binding exposes
# through the `nbWorkers` parameter; without it zstd falls back to the
# single-threaded path and nbWorkers is rejected.  ZSTD_MULTITHREAD needs the
# pthread/windows thread primitives, which setup_result_library already links.
add_definitions(-DZSTD_MULTITHREAD)

# The library is built without DEBUGLEVEL and with the default memory
# functions: no ZSTD_DEBUG, no custom allocator, no trace hooks.
add_definitions(-DZSTD_DISABLE_ASM)

# The sources live under lib/{common,compress,decompress}, not in a flat src/
# directory, so the source list is globbed here instead of by
# option_src.cmake. The amd64 Huffman assembly file is left out: it is only
# used on x86_64 and the C fallback produces the same output.
file(GLOB_RECURSE src_list
    "${PROJECT_SOURCE_DIR}/lib/common/*.c"
    "${PROJECT_SOURCE_DIR}/lib/compress/*.c"
    "${PROJECT_SOURCE_DIR}/lib/decompress/*.c")

include(../build_tools/cmake/Library.cmake)
