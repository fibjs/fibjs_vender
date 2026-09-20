#!/bin/bash

set -ev

DIST_DIR="bin/${BUILD_OS}_${BUILD_ARCH}_${BUILD_TYPE}"

# Test binaries to run. exlib covers the fiber scheduler and the service
# lifecycle; its guard page test forks a child, so the iPhone targets keep
# running jssdk only.
DIST_EXECS="${DIST_DIR}/jssdk_test"

if [[ $BUILD_TARGET != 'iphone' && $BUILD_TARGET != 'iphone-simulator' ]]; then
    DIST_EXECS="${DIST_EXECS} ${DIST_DIR}/exlib_test"
fi

if [[ $HOST_OS == 'Linux' ]]; then
    CUR=`pwd`

    docker run -t --rm --privileged -v ${CUR}:${CUR} fibjs/${BUILD_TARGET}-build-env:${BUILD_ARCH} bash -c "set -e; cd ${CUR}; for exec in ${DIST_EXECS}; do \$exec; done"
elif [[ $BUILD_TARGET == 'iphone-simulator' ]]; then
    # iOS Simulator testing using shared script
    for exec in ${DIST_EXECS}; do
        bash ./build_tools/scripts/ios-simulator-run.sh "${exec}"
    done
else # Windows/Darwin (native)
    for exec in ${DIST_EXECS}; do
        $exec
    done
fi

exit 0;
