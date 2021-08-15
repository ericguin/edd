add_subdirectory(components)

add_executable(edd main.cc)

target_link_libraries(edd PUBLIC argparse)