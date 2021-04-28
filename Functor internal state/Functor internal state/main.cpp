#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>
#include "IntSequence.h"

// print the list item
template<typename T>
void printList ( std::list<T> _list ) {
	for ( int x : _list ) {
		std::cout << std::setw ( 5 ) << std::left << x;
	}
}

int main () {
	std::list<int>coll;// list
	std::generate_n ( std::back_inserter ( coll ) , 9 , IntSequence ( 1 ) );// insert value from 1 to 9
	printList ( coll );// print
	std::cout << std::endl;
	std::generate ( ++coll.begin () , --coll.end () , IntSequence ( 42 ) );// replace second to last element but on with values
	printList ( coll );// print
	std::cout << std::endl;
	system ( "PAUSE" );
}