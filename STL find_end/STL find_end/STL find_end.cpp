#include <iostream>
#include <list>
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

int main () {
	std::deque<int>coll;
	std::list<int>subcoll;

	INSERT_ELEMENTS ( coll , 1 , 7 );
	INSERT_ELEMENTS ( coll , 1 , 7 );
	INSERT_ELEMENTS ( subcoll , 3 , 6 );

	PRINT_ELEMENTS ( coll );
	PRINT_ELEMENTS ( subcoll );

	std::deque<int>::iterator pos = std::find_end ( coll.begin () , coll.end () , subcoll.begin () , subcoll.end () );
	std::deque<int>::iterator end ( coll.end () );

	while ( pos != end ) {
		std::cout << "subcoll found starting with element " << std::distance ( coll.begin () , pos ) + 1 << std::endl;

		end = pos;
		pos = std::find_end ( coll.begin () , end , subcoll.begin () , subcoll.end () );
	}

	system ( "pause" );
}