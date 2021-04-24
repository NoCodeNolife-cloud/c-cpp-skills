#include <iostream>
#include <deque>
#include <algorithm>
#include <fstream>

namespace cod {
	// print number
	template<typename T>
	void print ( T elem ) {
		std::fstream fout ( "out.txt" , std::ios::app );// open file
		fout << elem << " ";// print
		fout.close ();// close file
		return;
	}
}

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );// open file
	std::deque<int> coll;// deque

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	std::deque<int>::iterator pos1 = std::find ( coll.begin () , coll.end () , 2 );// find 2 position
	std::deque<int>::iterator pos2 = std::find ( coll.begin () , coll.end () , 7 );// find 7 position
	std::for_each ( pos1 , pos2 , cod::print<int> );// print
	fout << std::endl;

	// convert iterator to reverse iterator
	std::deque<int>::reverse_iterator rpos1 ( pos1 );
	std::deque<int>::reverse_iterator rpos2 ( pos2 );

	std::for_each ( rpos2 , rpos1 , cod::print<int> );// print
	fout << std::endl;
	fout.close ();// close file
	return 0;// exit
}