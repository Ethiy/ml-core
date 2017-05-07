cmake_minimum_required(VERSION 3.2)

project(ml-core CXX)

##
# ________________________________________________ Modules __________________________________________________
##
include(cmake/compilers.cmake)
include(cmake/dependencies.cmake)

##
# _______________________________________________ Library __________________________________________________
##

add_subdirectory(src/lib lib)
