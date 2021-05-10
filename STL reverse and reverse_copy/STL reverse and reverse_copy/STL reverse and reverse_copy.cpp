#include <iostream>
#include <vector>
#include <list>
#include <functional>
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

int main () {
	std::vector<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::reverse ( coll.begin () , coll.end () );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::reverse ( coll.begin () + 1 , coll.end () - 1 );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::reverse_copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	system ( "pause" );
}