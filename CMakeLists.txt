PROJECT(zclib)
cmake_minimum_required(VERSION 2.8)

include_directories(inc src)
#link_directories(${PROJECT_SOURCE_DIR}/lib)

#AUX_SOURCE_DIRECTORY(src SRCS)
set(SRCS src/assert.c src/except.c)
add_library(zclib STATIC ${SRCS})
add_executable(test_assert test/test_assert.c)
target_link_libraries(test_assert zclib)