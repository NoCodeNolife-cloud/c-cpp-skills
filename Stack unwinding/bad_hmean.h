#pragma once
#include <iostream>
using namespace std;

class bad_hmean
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :v1(a), v2(b) {
		return;
	}
	void mesg() {
		cout << "hmean(" << v1 << ", " << v2 << "): " << "invalid arguments: a = -b" << endl;
		return;
	}
};
