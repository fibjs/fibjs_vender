#!/bin/bash

set -ev

DIST_EXEC="bin/${HOST_OS}_${BUILD_ARCH}_${BUILD_TYPE}/jssdk_test"
if [[ $HOST_OS == 'Linux' ]]; then
    CUR=`pwd`

    if [[ "$BUILD_TARGET" != "" ]]; then
        docker run -t --rm -v ${CUR}:${CUR} fibjs/${BUILD_TARGET}-test-env:${TARGET_ARCH} bash -c "cd ${CUR}; $DIST_EXEC"
    else
        if [[ $TARGET_ARCH == 'x64' ]]; then
            docker run -t --rm -v ${CUR}:${CUR} ubuntu:12.04 bash -c "cd ${CUR}; $DIST_EXEC"
        else
            docker run -t --rm -v ${CUR}:${CUR} fibjs/linux-build-env:${TARGET_ARCH} bash -c "cd ${CUR}; $DIST_EXEC"
        fi
    fi
else # Windows/Darwin
    $DIST_EXEC
fi

exit 0;
