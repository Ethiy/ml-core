FROM ubuntu:16.04
RUN apt-get -y update
RUN apt-get -y upgrade
RUN apt-get install -y \
            gcc-5-base\
            libgcc-5-dev\
            g++\
            cmake\
            git\
            libeigen3-dev
WORKDIR /home
RUN git clone https://github.com/ethiy/ml-core.git
WORKDIR ml-core/
RUN git checkout master
RUN mkdir build && mkdir build/xenial
WORKDIR build/xenial
RUN cmake ../..
RUN make -j `nproc` all
