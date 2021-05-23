#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

	vector<int>coll;

	for (int i = 1; i <= 10; ++i) {

		coll.push_back(i);
	}

	int res = 0;
	for (int i = 0; i <= 9; ++i) {

		res += coll[i] * coll[coll.size() - 1 - i];
	}

	/*
	* so the result is equal to initValue + coll[0]*coll[9] + coll[1]*coll[8] + ...
	*/
	cout << inner_product(coll.begin(), coll.end(), coll.rbegin(), 0) << endl;
	cout << res << endl;
}