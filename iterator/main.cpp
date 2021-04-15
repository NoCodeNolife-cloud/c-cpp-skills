#include <iostream>
#include <fstream>
#include <list>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );// file
	std::list<char>coll;// list container for charater elements

	// append elements from 'a' to 'z'
	for ( char c = 'a'; c <= 'z'; ++c ) {
		coll.push_back ( c );
	}

	// print all elements
	std::list<char>::iterator pos;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {// 优先使用前置式递增,效率更好
		fout << *pos << " ";
	}
	fout << std::endl;

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}