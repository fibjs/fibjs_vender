#!/bin/bash

set -ev

DIST_EXEC="bin/${BUILD_OS}_${BUILD_ARCH}_${BUILD_TYPE}/jssdk_test"
if [[ $HOST_OS == 'Linux' ]]; then
    CUR=`pwd`

    if [[ "$BUILD_TARGET" == "linux" ]]; then
        docker run -t --rm -v ${CUR}:${CUR} fibjs/${BUILD_TARGET}-build-env:${BUILD_ARCH} bash -c "cd ${CUR}; $DIST_EXEC"
    else
        docker run -t --rm -v ${CUR}:${CUR} fibjs/${BUILD_TARGET}-test-env:${BUILD_ARCH} bash -c "cd ${CUR}; $DIST_EXEC"
    fi
else # Windows/Darwin
    $DIST_EXEC
fi

exit 0;
