#pragma once
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
/*-------------------------------------------------*/

int main()
{
	fstream fout("OUTPUT.dat", ios::out);
	fout << "八进制转十进制" << endl;
	int number;
	cin >> oct >> number;
	fout << setw(10) << left << oct << number << "->" << dec << number << endl;
	fout << "十进制转八进制" << endl;
	cin >> dec >> number;
	fout << setw(10) << left << dec << number << "->" << oct << number << endl;
	fout << "八进制转十六进制" << endl;
	cin >> oct >> number;
	fout << setw(10) << left << oct << number << "->" << hex << number << endl;
	fout << "十六进制转八进制" << endl;
	cin >> hex >> number;
	fout << setw(10) << left << hex << number << "->" << oct << number << endl;
	fout << "十进制转十六进制" << endl;
	cin >> dec >> number;
	fout << setw(10) << left << dec << number << "->" << hex << number << endl;
	fout << "十六进制转十进制" << endl;
	fout << setw(10) << left << hex << number << "->" << dec << number << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}