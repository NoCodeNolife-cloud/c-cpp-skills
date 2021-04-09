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
int main()
{
	fstream fin("INPUT.txt", ios::in);
	fstream fout("OUTPUT.txt", ios::out);
	vector<int>vec(50);
	generate(vec.begin(), vec.end(), rand);
	for (int l = 0; l < vec.size(); l++) {
		fout << vec[l] << endl;
	}
	int count = count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0; });
	fout << "the number of the even number is " << count << endl;
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}