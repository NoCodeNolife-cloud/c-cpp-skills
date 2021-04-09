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
/*-------------------------------------------------------*/
bool cmp(int a, int b);

int main()
{
	fstream filein("INPUT.dat", ios::in);
	fstream fileout("OUTPUT.dat", ios::out);
	vector<int>cnt;
	int temp;
	while (filein >> temp) {
		cnt.push_back(temp);
	}
	sort(cnt.begin(), cnt.end(), cmp);
	for (int x : cnt) {
		fileout << x << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}

bool cmp(int a, int b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}