#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );// open file
	std::ostream_iterator<int> intWriter ( fout , "\n" );// create ostream iterator for stream cout

	// write elements with the usual iterator interface
	*intWriter = 42;
	intWriter++;
	*intWriter = 77;
	intWriter++;
	*intWriter = -5;

	// create collection with elements from 1 to 9
	std::vector<int>coll;
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	// write all elements without any delimiter
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout ) );
	fout << std::endl;

	// write all elements with " < " as delimiter
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " < " ) );
	fout << std::endl;

	fout.close ();// close file
	return 0;// exit
}