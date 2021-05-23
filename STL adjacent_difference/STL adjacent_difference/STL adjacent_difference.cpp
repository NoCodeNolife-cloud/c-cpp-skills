#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main() {

	vector<int>col;
	
	for (int i = 1; i <= 9; ++i) {

		col.push_back(i);
	}

	copy(col.begin(), col.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	adjacent_difference(col.begin(), col.end(),ostream_iterator<int>(cout," "));
	cout << endl;
}