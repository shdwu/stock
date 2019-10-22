cmake_minimum_required (VERSION 2.8)
project (stock C)
aux_source_directory(./src DIR_SRCS)
add_executable (main ${DIR_SRCS})
