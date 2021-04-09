#include <valarray>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	valarray<double>gpa = { 3.1, 3.5, 3.8, 2.9, 3.3 };
	cout << "size = " << gpa.size() << endl;
	cout << "max = " << gpa.max() << endl;
	cout << "min = " << gpa.min() << endl;
	cout << "sum = " << gpa.sum() << endl;
	return 0;
}