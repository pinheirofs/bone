add_executable(init_status_test
init_status_test.cpp
)

target_link_libraries(init_status_test bone)

add_test("reciver_status_init" init_status_test)
