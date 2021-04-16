// head
#include <iostream>
#include <set>
#include <algorithm>
#include <fstream>

// main
int main () {
	// file
	std::fstream fout ( "out.txt" , std::ios::out );

	// set
	std::set<int>coll;

	// insert element from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.insert ( i );
	}

	// print all element for the collection
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// remove all elements with value 3
	int num = coll.erase ( 3 );

	// print number of removed elements
	fout << "number of removed elements: " << num << std::endl;

	// print all element of the modified collection
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}