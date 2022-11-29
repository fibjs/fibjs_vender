TARGET_OS=`uname`
case ${TARGET_OS} in
      MINGW*) TARGET_OS="Windows"
          HOST_MINGW="true";
          ;;
      CYGWIN*) TARGET_OS="Windows"
          HOST_CYGWIN="true";
          ;;
esac

echo "::set-output name=TARGET_OS::$TARGET_OS"

echo "::set-output name=BUILD_USE_CLANG::$BUILD_USE_CLANG"

export GIT_BRANCH=${GITHUB_REF#refs/heads/}
echo "::set-output name=GIT_BRANCH::$GIT_BRANCH"
export GIT_COMMIT_HEAD_MSG=$(git log --format=%b -1)
echo "::set-output name=GIT_COMMIT_HEAD_MSG::$GIT_COMMIT_HEAD_MSG"
export GIT_COMMIT_SHORTCUTS=$(git log --format=%h -1)
echo "::set-output name=GIT_COMMIT_SHORTCUTS::$GIT_COMMIT_SHORTCUTS"
export GIT_COMMIT_TIME=$(git show -s --format="%cd" --date=format:%Y%m%d%H%M%S HEAD)
echo "::set-output name=GIT_COMMIT_TIME::$GIT_COMMIT_TIME"

if [ "$GITHUB_REPOSITORY" == "fibjs/fibjs_vender" ]; then
    export IS_MAIN_REPO=1
fi
if [[ -z "$IS_MAIN_REPO" || "$GIT_BRANCH" == "dev" ]]; then
    echo "::set-output name=IS_UPLOAD_ASSETS::1"
fi

export RELEASE_TAG="$GIT_COMMIT_TIME-$GIT_COMMIT_SHORTCUTS";
if [ -z "$IS_MAIN_REPO" ]; then
    SUFFIX=${GIT_BRANCH//\//'-'}
    RELEASE_TAG="$RELEASE_TAG-$SUFFIX"
fi
echo "::set-output name=RELEASE_TAG::$RELEASE_TAG"

git fetch;
if [ $(git tag --list | egrep "^$RELEASE_TAG$") ]; then
    echo "tag $RELEASE_TAG existed";
    export TAG_EXISTED="YES"
else
    export TAG_EXISTED=""
fi
echo "::set-output name=TAG_EXISTED::$TAG_EXISTED"

case "${TARGET_ARCH}" in
    i386)
        DIST_ARCH=x86
        SNAPSHOT_ARCH=ia32
        ;;
    amd64)
        DIST_ARCH=x64
        SNAPSHOT_ARCH=x64
        ;;
    *)
        DIST_ARCH=$TARGET_ARCH
        SNAPSHOT_ARCH=$TARGET_ARCH
        ;;
esac

if [[ "$RUNNER_OS" == "Linux" ]]; then
    export TARGET_OS_NAME="Linux";

    if [[ "$BUILD_TARGET" != "" ]]; then
        export DIST_FILE="vender-${BUILD_TARGET}-${DIST_ARCH}-$BUILD_TYPE.zip"
    else
        export DIST_FILE="vender-linux-${DIST_ARCH}-$BUILD_TYPE.zip"
    fi
    export DIST_DIR="${TARGET_OS_NAME}_${TARGET_ARCH}_$BUILD_TYPE"
fi

if [[ "$RUNNER_OS" == "macOS" ]]; then
    export TARGET_OS_NAME="Darwin";
    export DIST_FILE="vender-darwin-${DIST_ARCH}-$BUILD_TYPE.zip"
    export DIST_DIR="${TARGET_OS_NAME}_${TARGET_ARCH}_$BUILD_TYPE"
fi

if [[ "$RUNNER_OS" == "Windows" ]]; then
    export TARGET_OS_NAME="Windows";
    export DIST_FILE="vender-windows-${DIST_ARCH}-$BUILD_TYPE.zip"
    export DIST_DIR="${TARGET_OS_NAME}_${TARGET_ARCH}_$BUILD_TYPE"
fi

echo "::set-output name=TARGET_OS_NAME::$TARGET_OS_NAME"
echo "::set-output name=DIST_FILE::$DIST_FILE"
echo "::set-output name=DIST_DIR::$DIST_DIR"

export DIST_FILEPATH=$RELEASE_TAG/$DIST_FILE
echo "::set-output name=DIST_FILEPATH::$DIST_FILEPATH"
