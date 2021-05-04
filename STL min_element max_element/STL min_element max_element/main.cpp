#include <iostream>
#include <deque>
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

bool absLess ( int elem1 , int elem2 ) {
	return abs ( elem1 ) < abs ( elem2 );
}

int main () {
	std::deque<int>coll;

	INSERT_ELEMENTS ( coll , 2 , 8 );
	INSERT_ELEMENTS ( coll , -3 , 5 );

	PRINT_ELEMENTS ( coll );

	std::cout << "minimum: " << *std::min_element ( coll.begin () , coll.end () ) << std::endl;
	std::cout << "maximum: " << *std::max_element ( coll.begin () , coll.end () ) << std::endl;

	std::cout << "minimum of absolute values:" << *std::min_element ( coll.begin () , coll.end () , absLess ) << std::endl;
	std::cout << "maximum of absolute values:" << *std::max_element ( coll.begin () , coll.end () , absLess ) << std::endl;

	system ( "pause" );
}