#include "head.h"
fstream fout("out.txt", ios::out);

int main()
{
	int a = 2, b = 3, c = 6, d = 9, e, f = 4;
	fout << "(e=d) e=" << (e = d, e) << endl;
	fout << "(a*=b) a=" << (a *= b, a) << endl;
	fout << "(c/=b) c=" << (c /= b, c) << endl;
	fout << "(a%f) a=" << (a %= f, a) << endl;
	fout << "(c+=d) c=" << (c += d, c) << endl;
	fout << "(c-=d) c=" << (c -= d, c) << endl;
	fout << "(c<<=b) c=" << (c <<= b, c) << endl;
	fout << "(c>>=b) c=" << (c >>= b, c) << endl;
	fout << "(b&=d) b=" << (b &= d, b) << endl;
	fout << "(c|=d) c=" << (c |= d, c) << endl;
	fout << "(b^=c) b=" << (b ^= c, b) << endl;
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}