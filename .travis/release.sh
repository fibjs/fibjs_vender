#!/bin/bash

set -ev

TARGET_ARCH=${ARCH}

case "${ARCH}" in
  i386)
    TARGET_ARCH=x86
      ;;
  amd64)
    TARGET_ARCH=x64
      ;;
esac

if [[ $TRAVIS_TAG != "" ]]; then
  mkdir -p ${TRAVIS_TAG}
fi

DIST_FILE=""

if [[ $TRAVIS_OS_NAME == 'linux' ]]; then # linux
  DIST_FILE=Linux_${ARCH}_release
  zip -j ./${TRAVIS_TAG}/vender-${TRAVIS_TAG}-linux-${TARGET_ARCH}.zip .dist/bin/${DIST_FILE}/*
else # darwin
  DIST_FILE=Darwin_${ARCH}_release
  zip -j ./${TRAVIS_TAG}/vender-${TRAVIS_TAG}-darwin-${TARGET_ARCH}.zip .dist/bin/${DIST_FILE}/*
fi

if [[ ($TRAVIS_OS_NAME == 'linux']) && ($TARGET_ARCH == 'x64') ]]; then
  echo "zip fullsrc..."
  sudo rm -rf .git
  sudo sh build clean
  zip -r ./${TRAVIS_TAG}/fullsrc.zip ./ -x ${TRAVIS_TAG}/*
fi

exit 0;
