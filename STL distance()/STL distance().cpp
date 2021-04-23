#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out );// open file
	std::list<int>coll;// assertion

	// insert elements from -3 to 9
	for ( int i = -3; i < 10; ++i ) {
		coll.push_back ( i );
	}

	// search element with value 5
	std::list<int>::iterator pos = std::find ( coll.begin () , coll.end () , 5 );
	if ( pos != coll.end () ) {
		fout << "difference between beginning and 5: " << std::distance ( coll.begin () , pos ) << std::endl;
	} else {
		fout << "5 not found" << std::endl;
	}

	fout.close ();// close file
	return 0;
}