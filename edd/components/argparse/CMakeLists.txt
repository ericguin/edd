target_sources(edd PRIVATE src/argparse.cc)
target_include_directories(edd PUBLIC public)

target_sources(test PRIVATE src/argparse.cc test/argparse_test.cc)
target_include_directories(test PUBLIC public)