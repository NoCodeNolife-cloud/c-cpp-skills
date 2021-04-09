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
#include "Example.h"

int main()
{
	Example car(15);
	Example van(20);
	Example garage;
	cout << "car.use_ptr() output:\n";
	car.use_ptr();
	cout << "\nvan.use_ptr() output:\n";
	van.use_ptr();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}