#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
	typedef std::set<int> IntSet;// TYPE of the collection
	IntSet coll;// SET CONTAINER for INT VALUES

	// INSERT elements from 1 to 6 in arbitrary order
	coll.insert ( 3 );
	coll.insert ( 1 );
	coll.insert ( 5 );
	coll.insert ( 4 );
	coll.insert ( 1 );
	coll.insert ( 6 );
	coll.insert ( 2 );

	// PRINT ALL elements
	IntSet::const_iterator pos;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		fout << std::setw ( 5 ) << std::left << *pos;
	}
	std::cout << std::endl;

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}