#include <iostream>
#include <vector>
#include <list>
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
	std::list<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	INSERT_ELEMENTS ( coll , 1 , 9 );

	PRINT_ELEMENTS ( coll );

	std::list<int>::iterator pos1 = std::find ( coll.begin () , coll.end () , 4 );
	std::list<int>::iterator pos2;
	if ( pos1 != coll.end () ) {
		pos2 = std::find ( ++pos1 , coll.end () , 4 );
	}

	if ( pos1 != coll.end () and pos2 != coll.end () ) {
		std::copy ( pos1 , pos2 , std::ostream_iterator<int> ( std::cout , " " ) );
	}
	std::cout << std::endl;

	system ( "pause" );
}