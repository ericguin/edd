add_executable(edd main.cc)
add_executable(test test.cc)

add_subdirectory(components)

target_link_libraries(test CppUTest CppUTestExt)