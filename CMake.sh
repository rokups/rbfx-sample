#!/usr/bin/env sh
mkdir -p cmake-build
SRC=$(realpath "$(dirname "$0")")
BUILD=$(realpath $SRC/cmake-build)
pushd $BUILD
cmake -DBUILD_SHARED_LIBS=ON $SRC
cmake --build $BUILD -- -j$(nproc --all)
popd
