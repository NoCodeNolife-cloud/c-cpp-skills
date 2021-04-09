#include <iostream>
#include "bad_gmean.h"
#include "bad_hmean.h"
#include "Function.h"
using namespace std;

int main() {
	double x, y, z;
	cout << "Enter two numbers: ";
	while (cin >> x >> y) {
		try {
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}
		catch (bad_hmean& bg) {
			bg.mesg();
			cout << "Try again." << endl;
			continue;
		}
		catch (bad_gmean& hg) {
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
			cout << "Sorry, you don't get to play any more." << endl;
			break;
		}
	}
	cout << "Bye!" << endl;
	return 0;
}