#pragma once

double hmean(double a, double b) {
	if (a == -b) {
		throw "bad hmean() arguments: a=-b not allowed";
	}
	return 2.0 * a * b / (a + b);
}
