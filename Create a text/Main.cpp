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
int main()
{
	fstream fin("INPUT.txt", ios::in);
	if (!fin.is_open()) {
		cerr << "not open";
		return 1;
	}
	string str;
	fin >> str;
	fin.close();
	fstream fout(str + ".txt", ios::out);
	if (!fout.is_open()) {
		cerr << "not create";
	}
	else {
		fout << "Done!\n";
		fout.close();
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}