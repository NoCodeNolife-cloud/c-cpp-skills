#include "head.h"

fstream fout("out.txt", ios::out);

extern int pages;

void Function::printpages() {
	int pages = 100;
	fout << "ȫ�ֱ���pages=" << ::pages << endl;
	fout << "���ر���pages=" << pages << endl;
	return;
}