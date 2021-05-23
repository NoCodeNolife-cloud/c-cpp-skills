#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main () {

	srand ( time ( NULL ) );

	multiset<int>coll;
	for ( int i = 0; i < 100; i++ ) {

		coll.insert ( rand () % 25 );
	}

	for ( int item : coll ) {

		cout << item << " ";
	}
	cout << endl;

	int count = 0;
	for ( multiset<int>::iterator pos = coll.equal_range ( 5 ).first; pos != coll.equal_range ( 5 ).second; ++pos ) {

		++count;
		cout << *pos << " ";
	}
	cout << endl;

	cout << "the number of equal value is " << count << endl;

	system ( "pause" );
}