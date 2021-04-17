// head
#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>
#include <cstdlib>

// predicate, which return whether an integer is a prime number
bool isPrime ( int number ) {
	// ignore negative sign
	number = abs ( number );

	// 0 and 1 are prime numbers
	if ( number == 0 or number == 1 ) {
		return true;
	}

	// find divisor that divides without a remainder
	int divisor;
	for ( divisor = number / 2; number % divisor != 0; --divisor ) {
	}

	// if no divisor greater than 1 is find it is a prime number
	return divisor == 1;
}

int main () {
	// file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	// list
	std::list<int> coll;

	// insert element from 24 to 30
	for ( int i = 24; i <= 30; ++i ) {
		coll.push_back ( i );
	}

	// search for prime number
	std::list<int>::iterator pos = std::find_if ( coll.begin () , coll.end () , isPrime );
	if ( pos != coll.end () ) {
		//found
		fout << *pos << " is first prime number fount" << std::endl;
	} else {
		//not found
		fout << "no prime number found" << std::endl;
	}

	// exit
	system ( "PAUSE" );
	std::exit ( EXIT_SUCCESS );
}