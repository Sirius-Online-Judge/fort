cmake_minimum_required(VERSION 3.15)
project(fort C)

set(CMAKE_C_STANDARD 11)


add_executable(fort fort.c fort.h cgroup.c cgroup.h sandbox.c sandbox.h sce.h result.c result.h)
target_link_libraries(fort -lseccomp)
