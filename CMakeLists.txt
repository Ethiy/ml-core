cmake_minimum_required(VERSION 3.2)

project(ml-core CXX)

option(use_eigen3 "Use the Eigen3 support" ON)

##
# ________________________________________________ Modules __________________________________________________
##
include(cmake/compilers.cmake)
include(cmake/dependencies.cmake)

##
# _______________________________________________ Library __________________________________________________
##

add_subdirectory(src/lib lib)
