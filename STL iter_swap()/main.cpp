#include <iostream>
#include <list>
#include <fstream>
#include <algorithm>

namespace cod {
	// print
	template<typename T>
	void print ( std::list<T> _list );
}

int main () {
	std::list<int>coll;// assertion list

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	cod::print ( coll );// print value
	std::iter_swap ( coll.begin () , ++coll.begin () );// swap first and second value
	cod::print ( coll );// print value
	std::iter_swap ( coll.begin () , --coll.end () );// swap first and last value
	cod::print ( coll );// print value
	return 0;// exit
}

template<typename T>
void cod::print ( std::list<T> _list ) {
	std::fstream fout ( "out.txt" , std::ios::app );// open file

	// print
	copy ( _list.begin () , _list.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	fout.close ();// close file
	return;
}