#include <iostream>
#include <vector>
#include <algorithm>
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

	std::vector<int>coll1;
	std::vector<int>coll2;

	INSERT_ELEMENTS ( coll1 , 1 , 9 );
	INSERT_ELEMENTS ( coll2 , 1 , 9 );
	PRINT_ELEMENTS ( coll1 , "coll1: " );
	PRINT_ELEMENTS ( coll2 , "coll2: " );

	std::cout << std::endl;

	std::vector<int>::iterator pos1 , pos2;
	pos1 = std::partition ( coll1.begin () , coll1.end () , std::not1 ( std::bind2nd ( std::modulus<int> () , 2 ) ) );
	pos2 = std::stable_partition ( coll2.begin () , coll2.end () , std::not1 ( std::bind2nd ( std::modulus<int> () , 2 ) ) );

	PRINT_ELEMENTS ( coll1 , "coll1: " );
	std::cout << "first odd element: " << *pos1 << std::endl;

	PRINT_ELEMENTS ( coll2 , "coll2: " );
	std::cout << "first odd element: " << *pos2 << std::endl;

	system ( "pause" );
}