#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {

	vector<int>coll;

	for (int i = 1; i <= 6; ++i) {

		coll.push_back(i);
	}

	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "),multiplies<int>());
	cout << endl;
}