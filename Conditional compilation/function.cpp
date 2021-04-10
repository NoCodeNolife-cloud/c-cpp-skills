#include "head.h"

fstream fout("out.txt", ios::out);

void function::run() {
	fout << "run!" << endl;
	return;
}

void function::error() {
	fout << "error!" << endl;
	return;
}