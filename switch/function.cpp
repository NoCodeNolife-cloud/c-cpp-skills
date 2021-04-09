#include "head.h"

fstream fout("out.txt", ios::out);

enum def { zero, one, two, three };

void Function::cheakswitch(int _x) {
	switch (_x) {
	case zero:
		fout << "你输入的是0\n";
		break;
	case one:
		fout << "你输入的是1\n";
		break;
	case two:
		fout << "你输入的是2\n";
		break;
	case three:
		fout << "你输入的是3\n";
		break;
	default:
		fout << "输入错误";
	}
	return;
}