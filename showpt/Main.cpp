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
	fstream fout("out.txt", ios::app);
	fstream fin("in.txt", ios::in);
	if (!fout.is_open() or !fin.is_open()) {
		cerr << "not open!";
		exit(EXIT_FAILURE);
	}
	float price1;
	fin >> price1;
	float price2;
	fin >> price2;
	fout << showpoint << "\"Furry Friends\" is $" << price1 << "!\n";
	fout << "\"Fiery Friends\" is $" << price2 << "!\n";
	fout << setprecision(2);
	fout << showpoint << "\"Furry Friends\" is $" << price1 << "!\n";
	fout << "\"Fiery Friends\" is $" << price2 << "!\n";
	fout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}