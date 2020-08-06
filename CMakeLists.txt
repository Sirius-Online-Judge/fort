cmake_minimum_required(VERSION 3.10)
project(fort C)


set(CMAKE_EXE_LINKER_FLAGS "-static")

add_compile_options(-static)
add_executable(fort fort.c fort.h cgroup.c cgroup.h sandbox.c sandbox.h sce.h result.c result.h)
target_link_libraries(fort -lseccomp)
