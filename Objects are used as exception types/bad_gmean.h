#pragma once
#include <iostream>
using namespace std;

class bad_gmean
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) :v1(a), v2(b) {
		return;
	}
	const char* mesg() {
		return "gmean() arguments should be >= 0\n";
	}
};
