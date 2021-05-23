#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {

	list<int>coll;

	for (int i = 1; i <= 7; ++i) {

		coll.push_back(i);
	}

	for (int i = 1; i <= 7; ++i) {

		coll.push_back(i);
	}

	for (int item : coll) {

		cout << item << " ";
	}
	cout << endl;

	list<int>::iterator pos = find(coll.begin(), coll.end(), 7);
	++pos;

	inplace_merge(coll.begin(), pos, coll.end());

	for (int item : coll) {

		cout << item << " ";
	}
	cout << endl;
}