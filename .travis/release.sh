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

if [[ -z $TRAVIS_TAG ]]; then
  export TRAVIS_TAG="release-$(git log --format=%h -1)";
  echo "TRAVIS_TAG is $TRAVIS_TAG";
fi

mkdir -p ${TRAVIS_TAG};

if [[ $TRAVIS_OS_NAME == 'linux' ]]; then # linux
  # file "Linux_${ARCH}_release" existed .dist/bin
  DIST_FILE=vender-${TRAVIS_TAG}-linux-${TARGET_ARCH}.zip
else # darwin
  # file "Darwin_${ARCH}_release" existed .dist/bin
  DIST_FILE=vender-${TRAVIS_TAG}-darwin-${TARGET_ARCH}.zip
fi

CUR=`pwd`
cd ./.dist/bin
zip -r ${CUR}/${TRAVIS_TAG}/${DIST_FILE} ./*
cd $CUR

if [[ ($TRAVIS_OS_NAME == 'linux']) && ($TARGET_ARCH == 'x64') ]]; then
  echo "zip fullsrc..."
  sudo rm -rf .git
  sudo sh build clean
  zip -r ./${TRAVIS_TAG}/fullsrc.zip ./ -x ${TRAVIS_TAG}/*
fi

exit 0;
