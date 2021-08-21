add_library(buffer src/buffer.cc)

target_include_directories(buffer PUBLIC public)

add_library(buffer_test src/buffer.cc test/buffer_test.cc)

target_include_directories(buffer_test PUBLIC public)