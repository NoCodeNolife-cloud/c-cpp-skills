#include "head.h"

fstream fout("out.txt", ios::out);

void Function::printsizeof() {
	fout << "sizeof(int)=" << sizeof(int) << endl;
	fout << "sizeof(align_struct)=" << sizeof(align_struct) << endl;
	int array[] = { 11,22,33,44 };
	fout << "sizeof(array)=" << sizeof(array) << endl;
	fout << "sizeof(array[0])=" << sizeof(array[0]) << endl;
	fout << "count=" << sizeof(array) / sizeof(array[0]) << endl;
	return;
}