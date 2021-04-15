#include <iostream>
#include <deque>
#include <fstream>
#include <iomanip>

// MAIN
int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );// save file
	std::deque<float>coll;// DEQUE container for floating-point elements

	// INSERT elements form 1.1 to 6.6 each at the front
	for ( int i = 1; i <= 6; i++ ) {
		coll.push_front ( i * 1.1 );
	}

	// PRINT all elements followed by a space
	for ( int i = 0; i < coll.size (); i++ ) {
		fout << std::setw ( 15 ) << std::left << coll [ i ];
	}
	fout << std::endl;

	// EXIT
	fout.close ();
	exit ( EXIT_SUCCESS );
}