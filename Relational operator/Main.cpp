#include "head.h"
#include <fstream>

fstream fout("out.txt", ios::out);

int main()
{
	int a = 1, b = 2, c = 2, d = 4, e = 5;
	fout << "(a<b)=" << boolalpha << (a < b) << endl;
	fout << "(c<=b)=" << boolalpha << (c <= b) << endl;
	fout << "(d>e)=" << boolalpha << (d > e) << endl;
	fout << "(e>=d)=" << boolalpha << (e >= d) << endl;
	fout << "(b==c)=" << boolalpha << (b == c) << endl;
	fout << "(b!=c)=" << boolalpha << (b != c) << endl;
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}