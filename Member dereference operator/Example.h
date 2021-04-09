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

class Example {
private:
	int feet;
	int inches;
public:
	Example();
	Example(int ft);
	~Example();
	void show_in()const;
	void show_ft()const;
	void use_ptr()const;
};