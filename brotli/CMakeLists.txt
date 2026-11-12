cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

# brotli 1.2.0, static library (c/common + c/enc + c/dec).
#
# Only the library sources are vendored: c/tools/, java/, js/, research/ and
# the fuzzers are not, so libbrotli.a carries the plain encoder/decoder API this
# tree needs (BrotliEncoderCompress, BrotliEncoderCompressStream,
# BrotliDecoderDecompress, BrotliDecoderDecompressStream) plus the parameter and
# constant tables the zlib module exposes as zlib.constants.
#
# Upstream provenance: https://github.com/google/brotli tag v1.2.0, the whole
# c/{common,enc,dec,include} subtree, kept in its original layout because the
# sources include each other through paths relative to c/ (for example
# "enc/encode.h").

# The sources include each other through c/-relative paths, so c/ is on the
# include path in addition to the public header directory.
include_directories(${PROJECT_SOURCE_DIR}/c ${PROJECT_SOURCE_DIR}/c/include)

# The sources live under c/{common,enc,dec}, so the source list is globbed here
# instead of by option_src.cmake's src/ glob.
file(GLOB_RECURSE src_list
    "${PROJECT_SOURCE_DIR}/c/common/*.c"
    "${PROJECT_SOURCE_DIR}/c/enc/*.c"
    "${PROJECT_SOURCE_DIR}/c/dec/*.c")

include(../build_tools/cmake/Library.cmake)
