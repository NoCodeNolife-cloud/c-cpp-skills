#include <iostream>
#include <algorithm>
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
	std::list<int>coll;

	std::generate_n ( std::back_inserter ( coll ) , 5 , rand );
	PRINT_ELEMENTS ( coll );

	std::generate ( coll.begin () , coll.end () , rand );
	PRINT_ELEMENTS ( coll );

	system ( "pause" );
}