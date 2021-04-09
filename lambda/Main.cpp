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
#include "Function.h"
int main()
{
	fstream fin("INPUT.bin", ios::in | ios::binary);
	fstream fout("OUTPUT.txt", ios::out);
	vector<int>res;
	int num;
	while (fin >> num) {
		res.push_back(num);
	}
	int cnt = count_if(res.begin(), res.end(), [](int a) {return a % 5 == 0; });
	for (int l = 0; l < res.size(); l++) {
		fout << res[l] << " ";
	}
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}