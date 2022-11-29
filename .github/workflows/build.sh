#!/bin/bash

if [[ "$BUILD_TARGET" != "" ]]; then
    CUR=`pwd`
    docker run --rm -v ${CUR}:/fibjs fibjs/${BUILD_TARGET}-build-env:${TARGET_ARCH} bash -c "cd /fibjs; bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci"
else
    bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci
fi