#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>

int main () {
	std::list<int> coll1;

	// insert elements from 1 to 9 into the first collection
	for ( int i = 1; i <= 9; ++i ) {
		coll1.push_back ( i );
	}

	// copy the elements of coll1 into coll2 by appending them
	std::vector<int> coll2;
	std::copy ( coll1.begin () , coll1.end () , std::back_inserter ( coll2 ) );

	// copy the elements of coll1 into coll2 by appending them
	std::deque<int>coll3;
	std::copy ( coll1.begin () , coll1.end () , std::front_inserter ( coll3 ) );

	// copy elements of coll1 into coll4
	std::set<int>coll4;
	std::copy ( coll1.begin () , coll1.end () , std::inserter ( coll4 , coll4.begin () ) );

	// exit
	std::exit ( EXIT_SUCCESS );
}