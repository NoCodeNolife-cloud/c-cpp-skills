#include <iostream>
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

int main () {
	std::list<int>coll;

	INSERT_ELEMENTS ( coll , 2 , 7 );
	INSERT_ELEMENTS ( coll , 4 , 9 );

	PRINT_ELEMENTS ( coll , "coll: " );

	std::replace ( coll.begin () , coll.end () , 6 , 42 );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::replace_if ( coll.begin () , coll.end () , std::bind2nd ( std::less<int> () , 5 ) , 0 );
	PRINT_ELEMENTS ( coll , "coll: " );

	system ( "pause" );
}