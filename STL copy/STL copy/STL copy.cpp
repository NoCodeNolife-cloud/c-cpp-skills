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
	std::vector<int>coll1;
	std::list<int>coll2;

	INSERT_ELEMENTS ( coll1 , 1 , 9 );

	std::copy ( coll1.begin () , coll1.end () , std::back_inserter ( coll2 ) );

	std::copy ( coll2.begin () , coll2.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	system ( "pause" );
}