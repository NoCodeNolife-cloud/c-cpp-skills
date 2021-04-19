#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

int main () {
	// file
	std::fstream fout ( "out.txt" , std::ios::out );

	// vector
	std::vector<bool>vec ( 10 , true );

	// print vector
	for ( bool item : vec ) {
		fout << std::setw ( 8 ) << std::left << std::boolalpha << item;
	}
	fout << std::endl;

	// flip
	vec.flip ();

	// print vector
	for ( bool item : vec ) {
		fout << std::setw ( 8 ) << std::left << std::boolalpha << item;
	}
	fout << std::endl;

	// change
	vec [ 3 ].flip ();

	// print vector
	for ( bool item : vec ) {
		fout << std::setw ( 8 ) << std::left << std::boolalpha << item;
	}
	fout << std::endl;

	// exit
	std::exit ( EXIT_SUCCESS );
}