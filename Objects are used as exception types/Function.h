#pragma once
#include "bad_gmean.h"
#include "bad_hmean.h"
#include <math.h>

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