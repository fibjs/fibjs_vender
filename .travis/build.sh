#!/bin/bash

set -ev

if [[ $TRAVIS_OS_NAME == 'linux' ]]; then
    echo "start docker build..."
    DIR=`pwd`;sudo docker run -it --env GIT_BRANCH=${TRAVIS_BRANCH} -v ${DIR}:/home/ci fibjs/build-env:clang /bin/sh -c "cd /home/ci; sh build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci"
else
    export GIT_BRANCH=${TRAVIS_BRANCH}
    sh build -j2 ${TARGET_ARCH} ${BUILD_TYPE} ci
fi

exit 0;