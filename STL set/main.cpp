#include <iostream>
#include <set>
#include <iomanip>
#include <fstream>

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out );

	// set
	std::set<int , std::less<int>> set_less;
	std::set<int , std::greater<int>> set_greater;

	// initialize
	for ( int i = 0; i < 10; ++i ) {
		set_less.insert ( i );
		set_greater.insert ( i );
	}

	// print set_less
	fout << "set_less\t";
	for ( int x : set_less ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// print set_greater
	fout << "set_greater\t";
	for ( int x : set_greater ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// count
	fout << " 1 is find?  " << std::boolalpha << ( ( set_less.find ( 1 ) != set_less.end () ) ? true : false ) << std::endl;
	fout << " -1 is find?  " << std::boolalpha << ( ( set_less.find ( -1 ) != set_less.end () ) ? true : false ) << std::endl;

	// erase
	set_greater.erase ( 5 );

	// print set_greater
	fout << "set_greater\t";
	for ( int x : set_greater ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// multiset
	std::multiset<int , std::less<int>> mul_set_less;

	// initialize
	for ( int i = 0; i < 10; ++i ) {
		mul_set_less.insert ( i );
	}
	mul_set_less.insert ( 5 );

	// print mul_set_less
	fout << "mul_set_less\t";
	for ( int x : mul_set_less ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// erase
	mul_set_less.erase ( 5 );

	// print mul_set_less
	fout << "mul_set_less\t";
	for ( int x : mul_set_less ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// exit
	std::exit ( EXIT_SUCCESS );
}