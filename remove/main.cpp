#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

int main () {
	// file
	std::fstream fout ( "out.txt" , std::ios::out );

	// list
	std::list<int>coll;

	// insert elements from 6 to 1 and 1 to 6
	for ( int i = 1; i <= 6; ++i ) {
		coll.push_front ( i );
		coll.push_back ( i );
	}

	// print all element of the collection
	copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// remove all elements with values 3
	std::list<int>::iterator end = remove ( coll.begin () , coll.end () , 3 );

	// print resultingg element of the collection
	std::copy ( coll.begin () , end , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// print distance of removed elements
	fout << "number of the removed elements: " << std::distance ( end , coll.end () ) << std::endl;

	// remove "removed" elements
	coll.erase ( end , coll.end () );

	// print all elements of the modified collection
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}