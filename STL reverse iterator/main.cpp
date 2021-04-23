#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

namespace cod {
	// print element
	template<typename T>
	void  print ( T elem );
}

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );// open file
	std::list<int> coll;// assertion list

	// insert element from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	// print all elements in normal order
	std::for_each ( coll.begin () , coll.end () , cod::print<int> );
	fout << std::endl;

	// print all elements in reverse order
	std::for_each ( coll.rbegin () , coll.rend () , cod::print<int> );
	fout << std::endl;

	fout.close ();// close file
	return 0;// exit
}

template<typename T>
void cod::print ( T elem ) {
	std::fstream fout ( "out.txt" , std::ios::app );// open file
	fout << elem << " ";// print
	fout.close ();// close file
	return;
}