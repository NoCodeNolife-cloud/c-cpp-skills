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

fstream fout("OUTPUT.dat", ios::out);

void show_list() {};

template<typename T>
void show_list(const T& value) {
	fout << value << endl;
	return;
}

template<typename T, typename...Args>
void show_list(const T& value, const Args&...args) {
	fout << value << ", ";
	show_list(args...);
}

int main()
{
	int n = 14;
	double x = 2.71828;
	string mr = "Mr. String objects!";
	show_list(n, x);
	show_list(x * x, '!', 7, mr);
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}