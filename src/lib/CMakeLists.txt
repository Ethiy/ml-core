# Linear Algebra library

set(
    linalg_header
    "linalg/linalg.h"
)

set(
    linalg_src
    "linalg/matrix.cpp"
)

add_library(core_linalg ${linalg_src} ${linalg_header})

set(
    core_header
    "core.h"
)

add_library(core SHARED ${core_header})
target_link_libraries(core core_linalg)
