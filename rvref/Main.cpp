#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
inline double f(double tf) { return 5.0 * (tf - 32.0) / 9.0; };
int main()
{
	fstream fin("INPUT.txt", ios::in);
	fstream fout("OUTPUT.txt", ios::out);
	double tc;
	fin >> tc;
	double&& rd1 = 7.07;
	double&& rd2 = 7.8 * tc + 32.0;
	double&& rd3 = f(rd2);
	fout << "tc value and address: " << tc << ", " << &tc << endl;
	fout << "rd1 value and address: " << rd1 << ", " << &tc << endl;
	fout << "rd2 value and address: " << rd2 << ", " << &tc << endl;
	fout << "rd3 value and address: " << rd3 << ", " << &tc << endl;
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}