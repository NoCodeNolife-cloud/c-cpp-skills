#include "head.h"

fstream fout("out.txt", ios::out);

void Function::printmenberselect() {
	MyDate tmpDates;
	tmpDates.nYear = 2008;
	fout << "��=" << (&tmpDates)->nYear << endl;
	return;
}