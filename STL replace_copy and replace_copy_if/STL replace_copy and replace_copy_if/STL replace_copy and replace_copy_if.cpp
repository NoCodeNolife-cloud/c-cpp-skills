#include <iostream>
#include <algorithm>
#include <list>
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
	std::list<int>coll;

	INSERT_ELEMENTS ( coll , 2 , 6 );
	INSERT_ELEMENTS ( coll , 4 , 9 );
	PRINT_ELEMENTS ( coll );

	std::replace_copy ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) , 5 , 55 );
	std::cout << std::endl;

	std::replace_copy_if ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) , std::bind2nd ( std::modulus<int> () , 5 ) , 42 );
	std::cout << std::endl;

	std::replace_copy_if ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) , std::bind2nd ( std::modulus<int> () , 2 ) , 0 );
	std::cout << std::endl;

	system ( "pause" );
}