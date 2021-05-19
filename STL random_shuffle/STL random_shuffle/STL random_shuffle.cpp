#include <iostream>
#include <fstream>
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

// functor
class MyRandom {

public:

	std::ptrdiff_t operator()( std::ptrdiff_t max ) {

		double temp;
		temp = static_cast< double >( rand () ) / static_cast< double >( RAND_MAX );
		return static_cast< std::ptrdiff_t >( temp * max );
	}
};

int main () {

	std::vector<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll , "coll: " );

	std::random_shuffle ( coll.begin () , coll.end () );

	PRINT_ELEMENTS ( coll , "shuffled: " );

	std::sort ( coll.begin () , coll.end () );

	MyRandom rd;
	std::random_shuffle ( coll.begin () , coll.end () , rd );

	system ( "pause" );
}