add_executable(init_status_test init_status_test.cpp)
target_link_libraries(init_status_test bone)
add_test("server_status_init" init_status_test)

add_executable(start_status_test start_status_test.cpp)
target_link_libraries(start_status_test bone)
add_test("server_status_start" start_status_test)
