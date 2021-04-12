#include <iostream>
#include <fstream>
#include "test.h"

int main(char argc, char* argv[]) {
	std::fstream fout("out.txt", std::ios::out);
	code::Test ctest(50);
	/*code::Test ctest;       can't implicit*/
	fout << ctest.getX() << std::endl;
	fout.close();
	return 0;
}