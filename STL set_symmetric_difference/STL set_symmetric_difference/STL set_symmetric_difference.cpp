#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

	multiset<int> coll1;
	coll1.insert(1);
	coll1.insert(2);
	coll1.insert(2);
	coll1.insert(4);
	coll1.insert(6);
	coll1.insert(7);
	coll1.insert(7);
	coll1.insert(9);

	multiset<int> coll2;
	coll2.insert(2);
	coll2.insert(2);
	coll2.insert(2);
	coll2.insert(3);
	coll2.insert(6);
	coll2.insert(6);
	coll2.insert(8);
	coll2.insert(9);

	set_symmetric_difference(coll1.begin(), coll1.end(), coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}