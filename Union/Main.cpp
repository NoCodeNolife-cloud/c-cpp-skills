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
#include <Windows.h>
#include <limits.h>
using namespace std;
/*-------------------------------------------------*/

enum NumType {
	INTEGER_INT,
	INTEGER_LONG,
	INTEGER_DOUBLE
};

union NumValue {
	int iValue;
	long lValue;
	double dValue;
};

int main(int argc, char* argv[])
{
	int count = argc - 1;
	NumValue* Values = new NumValue[count];
	NumType* Types = new NumType[count];
	for (int i = 1; i < argc; ++i) {
		if (strchr(argv[i], '.') != 0) {
			Values[i].dValue = atof(argv[i]);
			Types[i] = INTEGER_DOUBLE;
		}
		else {
			if ((atol(argv[i]) > INT_MAX) or (atol(argv[i]) < 0)) {
				Values[i].lValue = atol(argv[i]);
				Types[i] = INTEGER_LONG;
			}
			else {
				Values[i].iValue = atoi(argv[i]);
				Types[i] = INTEGER_INT;
			}
		}
		switch (Types[i]) {
		case INTEGER_INT:
			cout << "数据类型为Integer, 值为" << Values[i].iValue << endl;
			break;
		case INTEGER_LONG:
			cout << "数据类型为Long, 值为" << Values[i].iValue << endl;
			break;
		case INTEGER_DOUBLE:
			cout << "数据类型为Double, 值为" << Values[i].dValue << endl;
			break;
		}
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}