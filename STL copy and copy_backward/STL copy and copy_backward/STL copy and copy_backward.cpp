#include <iostream>
#include <algorithm>
#include <vector>

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
	std::vector<char>source ( 10 , '.' );
	for ( int c = 'a'; c <= 'f'; ++c ) {
		source.push_back ( c );
	}
	source.insert ( source.end () , 10 , '.' );
	PRINT_ELEMENTS ( source , "source: " );

	std::vector<char>c1 ( source.begin () , source.end () );
	std::copy ( c1.begin () + 10 , c1.begin () + 16 , c1.begin () + 7 );
	PRINT_ELEMENTS ( c1 , "c1: " );

	std::vector<char>c2 ( source.begin () , source.end () );
	std::copy_backward ( c2.begin () + 10 , c2.begin () + 16 , c2.begin () + 19 );
	PRINT_ELEMENTS ( c2 , "c2: " );

	system ( "pause" );
}