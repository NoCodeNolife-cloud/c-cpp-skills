#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <algorithm>

class IntSequence {
private:
	int value;
public:
	IntSequence ( int initialValue ) :value ( initialValue ) {}

	int operator()() {
		return value++;
	}
};

int main () {
	std::fstream fout ( "out.txt" , std::ios::out );
	std::list<int>coll;
	std::generate_n ( std::back_inserter ( coll ) , 9 , IntSequence ( 1 ) );
	for ( int x : coll ) {
		fout << std::setw ( 5 ) << std::left << x << std::endl;
	}
	std::generate ( ++coll.begin () , --coll.end () , IntSequence ( 42 ) );
	for ( int x : coll ) {
		fout << std::setw ( 5 ) << std::left << x << std::endl;
	}
	fout.close ();
}