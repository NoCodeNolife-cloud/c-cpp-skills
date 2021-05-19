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

int main () {
	std::vector<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 3 );
	PRINT_ELEMENTS ( coll , "on entry: " );

	while ( std::next_permutation ( coll.begin () , coll.end () ) ) {
		PRINT_ELEMENTS ( coll , " " );
	}
	PRINT_ELEMENTS ( coll , "afterward: " );

	while ( std::prev_permutation ( coll.begin () , coll.end () ) ) {
		PRINT_ELEMENTS ( coll , " " );
	}
	PRINT_ELEMENTS ( coll , "now: " );

	while ( std::prev_permutation ( coll.begin () , coll.end () ) ) {
		PRINT_ELEMENTS ( coll , " " );
	}
	PRINT_ELEMENTS ( coll , "afterward: " );

	system ( "pause" );
}