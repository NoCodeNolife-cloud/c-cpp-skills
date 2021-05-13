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

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll , "coll: " );

	rotate ( coll.begin () , coll.begin () + 1 , coll.end () );
	PRINT_ELEMENTS ( coll , "one left: " );

	rotate ( coll.begin () , coll.end () - 2 , coll.end () );
	PRINT_ELEMENTS ( coll , "two right: " );

	rotate ( coll.begin () , std::find ( coll.begin () , coll.end () , 4 ) , coll.end () );
	PRINT_ELEMENTS ( coll , "4 first: " );

	system ( "pause" );
}