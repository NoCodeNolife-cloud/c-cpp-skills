#include <iostream>
#include <fstream>
#include <iomanip>
#include <deque>

int main () {
	// fstream
	std::fstream fout ( "out.txt" , std::ios::out );

	// deque
	std::deque<int>deq;

	// deque initialize
	for ( int i = 0; i < 10; ++i ) {
		deq.push_front ( i );
		deq.push_back ( i );
	}

	// print
	for ( int x : deq ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// push front
	deq.push_front ( 100 );

	// push back
	deq.push_back ( 100 );

	// print
	for ( int x : deq ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// pop front
	deq.pop_front ();

	// push front
	deq.pop_back ();

	// print
	for ( int x : deq ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// deque at 5
	fout << "deque at 5 is " << deq [ 5 ] << std::endl;

	// print size
	fout << "the deque size is " << deq.size () << std::endl;

	// exit
	std::exit ( EXIT_SUCCESS );
}