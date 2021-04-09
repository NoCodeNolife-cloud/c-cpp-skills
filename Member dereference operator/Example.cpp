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

Example::Example()
{
	feet = 0;
	inches = 0;
	return;
}

Example::Example(int ft) {
	feet = ft;
	inches = 12 * ft;
	return;
}

Example::~Example() {
	return;
}

void Example::show_in()const {
	cout << inches << " inches\n";
	return;
}

void Example::show_ft()const {
	cout << feet << " feet\n";
	return;
}

void Example::use_ptr()const {
	Example yard(3);
	int Example::* pt;
	pt = &Example::inches;
	cout << "Set pt to &Example::inches\n";
	cout << "this->pt: " << this->*pt << endl;
	cout << "yard.*pt: " << yard.*pt << endl;
	pt = &Example::feet;
	cout << "Set pt to &Example::feet:\n";
	cout << "this->pt: " << this->*pt << endl;
	cout << "yard.*pt: " << yard.*pt << endl;
	void(Example:: * pf)()const;
	pf = &Example::show_in;
	cout << "Set pf to &Example::show_in\n";
	(this->*pf)();
	cout << "Useing (yard.*pf)(): ";
	(yard.*pf)();
	return;
}