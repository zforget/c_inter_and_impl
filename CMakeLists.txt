PROJECT(zclib)
cmake_minimum_required(VERSION 2.8)

include_directories(inc src)
#link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(test)
