#include <iostream>
#include <algorithm>
#include <string>
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
	std::fill_n ( std::ostream_iterator<int> ( std::cout , " " ) , 10 , 7.7 );
	std::cout << std::endl;

	std::list<std::string>coll;

	std::fill_n ( std::back_inserter ( coll ) , 9 , "hello" );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::fill ( coll.begin () , coll.end () , "again" );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::fill_n ( coll.begin () , coll.size () - 2 , "hi" );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::list<std::string>::iterator pos1 = coll.begin ();
	std::list<std::string>::iterator pos2 = coll.end ();

	std::fill ( ++pos1 , --pos2 , "hmmm" );
	PRINT_ELEMENTS ( coll , "coll: " );

	system ( "pause" );
}