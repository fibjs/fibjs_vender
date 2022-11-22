#!/bin/bash

if [[ "$BUILD_ALPINE" == "alpine" ]]; then
    CUR=`pwd`
    docker run --rm -v ${CUR}:/fibjs fibjs/alpine-build-env:${TARGET_ARCH} bash -c "cd /fibjs; bash build -j2 ${BUILD_TYPE} ci"
else
    bash build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci
fi