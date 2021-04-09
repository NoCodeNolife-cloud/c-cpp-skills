#include "head.h"

fstream fout("out.txt", ios::out);

extern int pages;

void Function::printpages() {
	int pages = 100;
	fout << "全局变量pages=" << ::pages << endl;
	fout << "本地变量pages=" << pages << endl;
	return;
}