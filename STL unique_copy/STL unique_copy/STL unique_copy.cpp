#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <functional>

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

bool differenceOne ( int elem1 , int elem2 ) {
	return elem1 + 1 == elem2 || elem1 - 1 == elem2;
}

int main () {
	int source [] = { 1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4 };
	int sourceNum = sizeof ( source ) / sizeof ( source [ 0 ] );

	std::list<int>coll;
	copy ( source , source + sourceNum , std::back_inserter ( coll ) );
	PRINT_ELEMENTS ( coll );

	std::unique_copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	std::unique_copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) , differenceOne );
	std::cout << std::endl;

	system ( "pause" );
}