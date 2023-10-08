set(libs
    v8
    exlib
    cares
    gtest
    unicode
    expat
    gumbo
    gd
    tiff
    jpeg
    png
    webp
    jemalloc
    zlib
    leveldb
    snappy
    msgpack
    pcre
    sqlite
    umysql
    uuid
    exif
    mbedtls
    secp256k1
    curve25519
    fips202
    blst
    blake2
    jssdk
    unzip
    uv
    fasttext
)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    list(APPEND libs
        winiconv
    )
else()
    list(APPEND libs
        editline
        ev
    )
endif()
