#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

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
	std::vector<int> coll1;
	std::list<int>coll2;

	INSERT_ELEMENTS ( coll1 , 1 , 6 );
	for ( int i = 1; i <= 16; i *= 2 ) {
		coll2.push_back ( i );
	}

	coll2.push_back ( 3 );

	PRINT_ELEMENTS ( coll1 , "coll1: " );
	PRINT_ELEMENTS ( coll2 , "coll2: " );

	std::pair<std::vector<int>::iterator , std::list<int>::iterator>values;
	values = std::mismatch ( coll1.begin () , coll1.end () , coll2.begin () );
	if ( values.first == coll1.end () ) {
		std::cout << "no mismatch" << std::endl;
	} else {
		std::cout << "first mismatch:" << *values.first << " and " << *values.second << std::endl;
	}

	values = std::mismatch ( coll1.begin () , coll1.end () , coll2.begin () , std::less_equal<int> () );
	if ( values.first == coll1.end () ) {
		std::cout << "always less-or-equal" << std::endl;
	} else {
		std::cout << "not less-or equal: " << *values.first << " and " << *values.second << std::endl;
	}

	system ( "pause" );
}