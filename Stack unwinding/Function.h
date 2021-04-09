#pragma once
#include <iostream>
#include "bad_hmean.h"
#include "bad_gmean.h"
#include "demo.h"
using namespace std;

double hmean(double a, double b) {
	if (a == -b) {
		throw bad_hmean(a, b);
	}
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
	if (a < 0 || b < 0) {
		throw bad_gmean(a, b);
	}
	return sqrt(a * b);
}

double means(double a, double b) {
	double am, hm, gm;
	demo d2("found in means()");
	am = (a + b) / 2.0;
	try {
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean& bg) {
		bg.mesg();
		cout << "Caught in means()" << endl;
		throw;
	}
	d2.show();
	return (am + hm + gm) / 3.0;
}