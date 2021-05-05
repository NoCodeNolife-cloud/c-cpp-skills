#include <iostream>
#include <deque>
#include <list>
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

bool checkEven ( int elem , bool even ) {
	if ( even ) {
		return elem % 2 == 0;
	} else {
		return elem % 2 == 1;
	}
}

int main () {
	std::deque<int>coll;
	std::list<int>subcoll;

	INSERT_ELEMENTS ( coll , 1 , 7 );
	INSERT_ELEMENTS ( coll , 1 , 7 );

	INSERT_ELEMENTS ( subcoll , 3 , 6 );

	PRINT_ELEMENTS ( coll , "coll: " );
	PRINT_ELEMENTS ( subcoll , "subcoll: " );

	std::deque<int>::iterator pos = std::search ( coll.begin () , coll.end () , subcoll.begin () , subcoll.end () );
	while ( pos != coll.end () ) {
		std::cout << "subcoll found starting with element " << distance ( coll.begin () , pos ) + 1 << std::endl;

		++pos;
		pos = std::search ( pos , coll.end () , subcoll.begin () , subcoll.end () );
	}

	std::vector<int> vec;

	INSERT_ELEMENTS ( vec , 1 , 9 );
	PRINT_ELEMENTS ( vec , "vec: " );

	bool checkEvenArgs [ 3 ] = { true,false,true };

	std::vector<int>::iterator pos1 = std::search ( vec.begin () , vec.end () , checkEvenArgs , checkEvenArgs + 3 , checkEven );

	while ( pos1 != vec.end () ) {
		std::cout << "subrange found starting with element " << std::distance ( vec.begin () , pos1 ) + 1 << std::endl;

		pos1 = std::search ( ++pos1 , vec.end () , checkEvenArgs , checkEvenArgs + 3 , checkEven );
	}

	system ( "pause" );
}