add_executable(test_assert test_assert.c)
target_link_libraries(test_assert zclib)

add_executable(test_mem test_mem.c)
target_link_libraries(test_mem zclib)
