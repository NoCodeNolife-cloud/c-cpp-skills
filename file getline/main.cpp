// head
#include <iostream>
#include <string>
#include <fstream>

// main
int main () {
	// open file
	std::fstream fin ( "in.txt" , std::ios::in );
	std::fstream fout ( "out.txt" , std::ios::out );

	while ( !fin.eof () ) {
		std::string line;
		std::getline ( fin , line );
		fout << line << std::endl;
	}

	// close file
	fin.close ();
	fout.close ();

	// exit
	std::exit ( EXIT_SUCCESS );
}