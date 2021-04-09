#include <iostream>
#include <cmath>
#include <string>
#include "bad_gmean.h"
#include "bad_hmean.h"
#include "Function.h"
using namespace std;

int main() {
	double x, y, z;
	{
		demo d1("found in block in main()");
		cout << "Enter two numbers: ";
		while (cin >> x >> y) {
			try {
				z = means(x, y);
				cout << "The mean mean of " << x << " and " << y << " is " << z << endl;
				cout << "Enter next pair: ";
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
		d1.show();
	}
	cout << "Bye!" << endl;
	return true;
}