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
inline void eatline() {
	while (cin.get() != '\n') {
		continue;
	}
	return;
}
/// <summary>
/// 内容
/// </summary>
struct planet {
	char name[20];
	double population;
	double g;
};
/// <summary>
/// 文件名
/// </summary>
const char* file = "planets.dat";
int main()
{
	planet pl;
	cout << fixed << right;
	fstream fin(file, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		cerr << "Here are the current contents of the " << file << " file:\n";
		/// <summary>
		/// 读取文件
		/// </summary>
		/// <returns></returns>
		while (fin.read((char*)&pl, sizeof(pl))) {
			cout << setw(20) << pl.name << ": " << setprecision(0) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open()) {
		cerr << "Can't open " << file << " file for output:\n";
		exit(EXIT_FAILURE);
	}
	cout << "Enter planet name(enter a blank line to quit):\n";
	cin.get(pl.name, 20);
	while (pl.name[0] != '\0') {
		eatline();
		cout << "Enter planetary population: ";
		cin >> pl.population;
		cout << "Enter planet's acceleration of gravity: ";
		cin >> pl.g;
		eatline();
		/// <summary>
		/// 输出文件
		/// </summary>
		/// <returns></returns>
		fout.write((char*)&pl, sizeof(pl));
		cout << "Enter planet name (enter a blank line to quit):\n";
		cin.get(pl.name, 20);
	}
	fout.close();
	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		cout << "Here are the new contents of the " << file << " file:\n";
		while (fin.read((char*)&pl, sizeof(pl))) {
			cout << setw(20) << pl.name << ": " << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	cout << "Done.\n";
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}