#include <iostream>
#include <vector>
#include <algorithm>

int main () {
	std::vector<int> coll;

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	// print all element in reverse order
	copy ( coll.rbegin () , coll.rend () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	//exit
	system ( "PAUSE" );
	std::exit ( EXIT_SUCCESS );
}