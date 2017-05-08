# Eigen3
if(use_eigen3)
    find_package(Eigen3 REQUIRED)
    include_directories(EIGEN3_INCLUDE_DIR)
endif(use_eigen3)
