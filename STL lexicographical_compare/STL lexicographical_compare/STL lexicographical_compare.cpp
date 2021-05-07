#include <iostream>
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

void printCollection ( const std::list<int>& l ) {
	PRINT_ELEMENTS ( l );
}

bool lessForCollection ( const std::list<int>& l1 , const std::list<int>& l2 ) {
	return std::lexicographical_compare ( l1.begin () , l1.end () , l2.begin () , l2.end () );
}

int main () {
	std::list<int>c1 , c2 , c3 , c4;

	INSERT_ELEMENTS ( c1 , 1 , 5 );
	c4 = c3 = c2 = c1;

	c1.push_back ( 7 );
	c2.push_back ( 2 );
	c3.push_back ( 0 );
	c4.push_back ( 2 );

	std::vector<std::list<int>>cc;

	cc.push_back ( c1 );
	cc.push_back ( c2 );
	cc.push_back ( c3 );
	cc.push_back ( c4 );
	cc.push_back ( c3 );
	cc.push_back ( c1 );
	cc.push_back ( c4 );
	cc.push_back ( c2 );

	std::for_each ( cc.begin () , cc.end () , printCollection );
	std::cout << std::endl;

	std::sort ( cc.begin () , cc.end () , lessForCollection );
	std::for_each ( cc.begin () , cc.end () , printCollection );

	system ( "pause" );
}