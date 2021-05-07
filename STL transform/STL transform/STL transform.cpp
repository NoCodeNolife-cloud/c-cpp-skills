#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
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
	PRINT_ELEMENTS ( coll1 , "coll1: " );

	std::transform ( coll1.begin () , coll1.end () , coll1.begin () , std::negate<int> () );
	PRINT_ELEMENTS ( coll1 , "negated: " );

	std::transform ( coll1.begin () , coll1.end () , std::back_inserter ( coll2 ) , std::bind2nd ( std::multiplies<int> () , 10 ) );
	PRINT_ELEMENTS ( coll2 , "coll2: " );

	std::transform ( coll2.rbegin () , coll2.rend () , std::ostream_iterator<int> ( std::cout , " " ) , std::negate<int> () );
	std::cout << std::endl;

	system ( "pause" );
}