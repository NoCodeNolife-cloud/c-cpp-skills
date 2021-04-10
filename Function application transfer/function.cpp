#include "head.h"

fstream fout("out.txt", ios::out);

void function::addone(int& _a)
{
	_a++;
	return;
}

void function::printrefrence() {
	int x = 99;
	fout << "x=" << x << endl;
	addone(x);
	fout << "addone(x) x=" << x << endl;
	return;
}