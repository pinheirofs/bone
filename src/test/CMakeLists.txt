add_executable(server_init_status_test server_init_status_test.cpp)
target_link_libraries(server_init_status_test bone)
add_test("server_status_init" server_init_status_test)

add_executable(server_start_status_test server_start_status_test.cpp)
target_link_libraries(server_start_status_test bone)
add_test("server_status_start-OK" server_start_status_test 2 true 1234)
add_test("server_status_start-Invalid_server" server_start_status_test 4 false 0)
add_test("server_status_start-Invalid_reciver" server_start_status_test 4 true 0)

add_executable(socket_reciver_validation_test socket_reciver_validation_test.cpp)
target_link_libraries(socket_reciver_validation_test bone)
add_test("socket_reciver_validation-OK" socket_reciver_validation_test true 1234)
add_test("socket_reciver_validation-invalid_port" socket_reciver_validation_test false 0)
