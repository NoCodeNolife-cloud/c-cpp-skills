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

int main () {
	std::vector<int>coll;
	std::list<int>searchcoll;

	INSERT_ELEMENTS ( coll , 1 , 11 );
	INSERT_ELEMENTS ( searchcoll , 3 , 5 );

	PRINT_ELEMENTS ( coll , "coll: " );
	PRINT_ELEMENTS ( searchcoll , "searchcoll: " );

	std::vector<int>::iterator pos = find_first_of ( coll.begin () , coll.end () , searchcoll.begin () , searchcoll.end () );

	std::cout << "first element of searchcoll in coll is element " << std::distance ( coll.begin () , pos ) + 1 << std::endl;

	std::vector<int>::reverse_iterator rpos = std::find_first_of ( coll.rbegin () , coll.rend () , searchcoll.begin () , searchcoll.end () );

	std::cout << "last element of searchcoll in coll is element " << std::distance ( coll.begin () , rpos.base () ) << std::endl;

	system ( "pause" );
}