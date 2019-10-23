cmake_minimum_required (VERSION 2.8)
project (stock C)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SUB_SOURCES)
add_executable (main ${SUB_SOURCES})

target_link_libraries (main curl)
target_link_libraries (main pthread)
