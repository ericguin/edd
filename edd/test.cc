#include "CppUTest/CommandLineTestRunner.h"

IMPORT_TEST_GROUP(argparse);

int main(int argc, char** argv)
{
    CommandLineTestRunner::RunAllTests(argc, argv);
}