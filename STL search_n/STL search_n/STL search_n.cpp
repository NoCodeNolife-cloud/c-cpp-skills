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

int main () {
	std::deque<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll );

	std::deque<int>::iterator pos = std::search_n ( coll.begin () , coll.end () , 4 , 3 );

	if ( pos != coll.end () ) {
		std::cout << "four consecutive elements with value 3 start with " << std::distance ( coll.begin () , pos ) + 1 << ". element" << std::endl;
	} else {
		std::cout << "no four consecutive elements with value 3 fount" << std::endl;
	}

	pos = search_n ( coll.begin () , coll.end () , 4 , 3 , std::greater<int> () );

	if ( pos != coll.end () ) {
		std::cout << "four consecutive elements with value > 3 start with " << std::distance ( coll.begin () , pos ) + 1 << ". element" << std::endl;
	} else {
		std::cout << "no four consecutive elements with value > 3 fount" << std::endl;
	}

	system ( "pause" );
}