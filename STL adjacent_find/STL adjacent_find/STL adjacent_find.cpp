#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
inline void PRINT_ELEMENTS ( const T& coll , const char* optcstr = "" ) {
	typename T::const_iterator pos;
	std::cout << optcstr;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}

template<class T>
inline void INSERT_ELEMENTS ( T& coll , int first , int last ) {
	for ( int i = first; i <= last; ++i ) {
		coll.insert ( coll.end () , i );
	}
}

bool doubled ( int elem1 , int elem2 ) {
	return elem1 * 2 == elem2;
}

int main () {
	std::vector<int>coll;

	coll.push_back ( 1 );
	coll.push_back ( 3 );
	coll.push_back ( 2 );
	coll.push_back ( 4 );
	coll.push_back ( 5 );
	coll.push_back ( 5 );
	coll.push_back ( 0 );

	PRINT_ELEMENTS ( coll , "coll: " );

	std::vector<int>::iterator pos = std::adjacent_find ( coll.begin () , coll.end () );
	if ( pos != coll.end () ) {
		std::cout << "first two elements with equal value have position "
			<< std::distance ( coll.begin () , pos ) + 1
			<< std::endl;
	}

	pos = std::adjacent_find ( coll.begin () , coll.end () , doubled );
	if ( pos != coll.end () ) {
		std::cout << "first two elements with second value twice the first have pos. "
			<< std::distance ( coll.begin () , pos ) + 1
			<< std::endl;
	}

	system ( "pause" );
}