#include "head.h"

fstream fout("out.txt", ios::out);

enum def { zero, one, two, three };

void Function::cheakswitch(int _x) {
	switch (_x) {
	case zero:
		fout << "���������0\n";
		break;
	case one:
		fout << "���������1\n";
		break;
	case two:
		fout << "���������2\n";
		break;
	case three:
		fout << "���������3\n";
		break;
	default:
		fout << "�������";
	}
	return;
}