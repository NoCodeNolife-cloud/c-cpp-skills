#include <iostream>
#include <vector>
#include <list>
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

bool bothEvenOrOdd ( int elem1 , int elem2 ) {
	return elem1 % 2 == elem2 % 2;
}

int main () {
	std::vector<int>coll1;
	std::list<int>coll2;

	INSERT_ELEMENTS ( coll1 , 1 , 7 );
	INSERT_ELEMENTS ( coll2 , 3 , 9 );

	PRINT_ELEMENTS ( coll1 , "coll1: " );
	PRINT_ELEMENTS ( coll2 , "coll2: " );

	if ( std::equal ( coll1.begin () , coll1.end () , coll2.begin () ) ) {
		std::cout << "coll1 == coll2" << std::endl;
	} else {
		std::cout << "coll1 != coll2" << std::endl;
	}

	if ( std::equal ( coll1.begin () , coll1.end () , coll2.begin () , bothEvenOrOdd ) ) {
		std::cout << "even and odd elemets correspond" << std::endl;
	} else {
		std::cout << "even and odd elemets do not correspond" << std::endl;
	}
	system ( "pause" );
}