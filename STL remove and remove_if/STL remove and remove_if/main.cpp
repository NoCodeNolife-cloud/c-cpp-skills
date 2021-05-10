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

	INSERT_ELEMENTS ( coll , 2 , 6 );
	INSERT_ELEMENTS ( coll , 4 , 9 );
	INSERT_ELEMENTS ( coll , 1 , 7 );
	PRINT_ELEMENTS ( coll , "coll:             " );

	std::vector<int>::iterator pos = std::remove ( coll.begin () , coll.end () , 5 );
	PRINT_ELEMENTS ( coll , "size not changed: " );

	coll.erase ( pos , coll.end () );
	PRINT_ELEMENTS ( coll , "size changed:     " );

	coll.erase ( std::remove_if ( coll.begin () , coll.end () , std::bind2nd ( std::less<int> () , 4 ) ) , coll.end () );
	PRINT_ELEMENTS ( coll , "<4 removed:       " );

	system ( "pause" );
}