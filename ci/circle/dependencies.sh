#! /usr/bin/env sh

sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt-get update -qq -y
sudo apt-get install build-essential g++-4.8 -y
sudo apt-get install cmake -y
sudo apt-get install libeigen3-dev -y
