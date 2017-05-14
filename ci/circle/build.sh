#! /usr/bin/env sh

mdkir -p build && mkdir -p build/trusty
cd build/trusty
cmake ../..

make help

make -j`nproc` all
