#include <iostream>
#include <vector>
#include <algorithm>
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

bool isEven ( int elem ) {
	return elem % 2 == 0;
}

int main () {
	std::vector<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );
	PRINT_ELEMENTS ( coll , "coll: " );

	int num = count ( coll.begin () , coll.end () , 4 );
	std::cout << "number of elements equal to 4: " << num << std::endl;

	num = std::count_if ( coll.begin () , coll.end () , isEven );
	std::cout << "number of elements with even value: " << num << std::endl;

	num = std::count_if ( coll.begin () , coll.end () , std::bind2nd ( std::greater<int> () , 4 ) );
	std::cout << "number of elements greater than 4: " << num << std::endl;

	system ( "pause" );
}