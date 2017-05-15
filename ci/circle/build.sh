#! /usr/bin/env sh

mkdir -p build && mkdir -p build/trusty
cd build/trusty
cmake ../..

make help

make -j`nproc` all
