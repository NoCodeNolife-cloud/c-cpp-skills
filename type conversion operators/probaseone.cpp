#include "probaseone.h"

code::ProBaseOne::ProBaseOne(int paraa, int parab) :Base(paraa), b(parab) {
	return;
}

void code::ProBaseOne::show() {
	std::fstream fout("out.txt", std::ios::app | std::ios::out);
	fout << "a = " << a << std::endl << "b = " << b << std::endl;
	fout.close();
	return;
}