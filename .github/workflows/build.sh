#!/bin/bash

TARGET_OS=`uname`

if [[ "$BUILD_TARGET" != "" ]]; then
    CUR=`pwd`
    docker run -t --rm -v ${CUR}:/fibjs fibjs/${BUILD_TARGET}-build-env:${TARGET_ARCH} bash -c "cd /fibjs; bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci"
elif [[ "$TARGET_OS" == "Linux" ]]; then
    CUR=`pwd`
    docker run -t --rm -v ${CUR}:/fibjs fibjs/linux-build-env:${TARGET_ARCH} bash -c "cd /fibjs; bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci"
else
    bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci
fi