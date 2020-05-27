#!/bin/bash

set -ev

case "${TARGET_ARCH}" in
  i386)
    DIST_ARCH=x86
      ;;
  amd64)
    DIST_ARCH=x64
      ;;
  *)
    DIST_ARCH=$TARGET_ARCH
    ;;
esac

GIT_COMMIT_SHORTCUTS=$(git log --format=%h -1)
GIT_COMMIT_TIME=$(git show -s --format="%cd" --date=format:%Y%m%d%H%M%S $TRAVIS_BRANCH)
if [[ -z $TRAVIS_TAG ]]; then
  export TRAVIS_TAG="$GIT_COMMIT_TIME-$GIT_COMMIT_SHORTCUTS";
  echo "TRAVIS_TAG is $TRAVIS_TAG";
fi

mkdir -p ${TRAVIS_TAG};

if [[ $TRAVIS_OS_NAME == 'linux' ]]; then # linux
  # file "Linux_${TARGET_ARCH}_$BUILD_TYPE" existed .dist/bin
  DIST_FILE=vender-linux-${DIST_ARCH}-$BUILD_TYPE.zip
else # darwin
  # file "Darwin_${TARGET_ARCH}_$BUILD_TYPE" existed .dist/bin
  DIST_FILE=vender-darwin-${DIST_ARCH}-$BUILD_TYPE.zip
fi

CUR=`pwd`
cd ./.dist/bin
echo "archiving file: $DIST_FILE"
zip -r ${CUR}/${TRAVIS_TAG}/${DIST_FILE} ./*
echo "finish archiving!"
cd $CUR

if [[ ($TRAVIS_OS_NAME == 'linux']) && ($DIST_ARCH == 'x64') ]]; then
  echo "zip fullsrc..."
  sudo rm -rf .git
  sudo sh build clean
  zip -r ./${TRAVIS_TAG}/fullsrc.zip ./ -x ${TRAVIS_TAG}/*
fi

exit 0;
