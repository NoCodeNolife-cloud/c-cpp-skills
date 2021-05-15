#include <iostream>
#include <set>
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
	std::set<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll );

	std::set<int>::iterator pos = coll.begin ();
	std::advance ( pos , 1 );

	std::rotate_copy ( coll.begin () , pos , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	pos = coll.end ();
	std::advance ( pos , -2 );
	std::rotate_copy ( coll.begin () , pos , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	std::rotate_copy ( coll.begin () , coll.find ( 4 ) , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) );
	std::cout << std::endl;

	system ( "pause" );
}