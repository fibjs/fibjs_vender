#!/bin/bash

TARGET_OS=`uname`

if [[ "$TARGET_OS" == "Linux" ]]; then
    if [[ "$BUILD_TARGET" == "" ]]; then
        BUILD_TARGET="linux"
    fi

    CUR=`pwd`
    docker run -t --rm -v ${CUR}:/fibjs fibjs/${BUILD_TARGET}-build-env:${TARGET_ARCH} bash -c "cd /fibjs; bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci"
else
    bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ${BUILD_TARGET} ci
fi