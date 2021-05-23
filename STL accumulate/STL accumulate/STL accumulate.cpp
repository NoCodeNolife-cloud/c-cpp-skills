#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

	vector<int>coll;

	for (int i = 1; i <= 100; ++i) {

		coll.push_back(i);
	}

	cout << "the sum of the vector is " << accumulate(coll.begin(), coll.end(), 0);
	cout << endl;
	
	cout << "the value of the vector is " << accumulate(coll.begin(), coll.end(), 1,multiplies<int>());
	cout << endl;
}