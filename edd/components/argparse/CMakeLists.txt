add_library(argparse src/argparse.cc)

target_include_directories(argparse PUBLIC public)

add_library(argparse_test src/argparse.cc test/argparse_test.cc)

target_include_directories(argparse_test PUBLIC public)