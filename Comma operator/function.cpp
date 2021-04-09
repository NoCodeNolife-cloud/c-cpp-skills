#include "head.h"

fstream fout("out.txt", ios::out);

void Function::TestFunction(int _x, int _y, int _z) {
	fout << "x=" << _x << endl;
	fout << "y=" << _y << endl;
	fout << "z=" << _z << endl;
	return;
}

void Function::printComma() {
	int a = 50, b = 0, c = 99;
	TestFunction(a, (b = 47, b - 7), c);
	return;
}