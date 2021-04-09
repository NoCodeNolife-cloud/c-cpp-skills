#pragma once
#include <iostream>
using namespace std;

class bad_hmean
{
private:
	double v1;
	double v2;
public:
	bad_hmean(int a = 0, int b = 0) :v1(a), v2(b) {
		return;
	}
	void mesg() {
		cout << "hmean(" << v1 << ", " << v2 << "): " << "invalid arguments: a = -b" << endl;
	}
};
