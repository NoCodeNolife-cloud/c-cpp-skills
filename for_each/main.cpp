// head
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

namespace cod {
	// function that print the passed argument
	void print ( int );
}

// main
int main () {
	// vector
	std::vector<int>coll;

	// insert element from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	// print all elements
	std::for_each ( coll.begin () , coll.end () , cod::print );
	std::cout << std::endl;

	// exit
	std::exit ( EXIT_SUCCESS );
}

void cod::print ( int elem ) {
	// file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	// print
	fout << elem << " ";

	// return
	fout.close ();
	return;
}