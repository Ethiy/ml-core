#! /usr/bin/env sh

sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt-get update -qq -y
sudo apt-get install build-essential g++-4.8 -y
sudo apt-get install libeigen3-dev -y
curl -o https://cmake.org/files/v3.8/cmake-3.8.1-Linux-x86_64.sh
sudo sh ./cmake-3.8.1-Linux-x86_64.sh
