#include <iostream>
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

template<class T>
class print {
public:
	void operator()( const T& _val ) const {
		std::cout << _val << " ";
	}
};

int main () {
	std::vector<int>coll;

	INSERT_ELEMENTS ( coll , 1 , 9 );

	std::for_each ( coll.begin () , coll.end () , print<int> () );
	std::cout << std::endl;

	system ( "pause" );
}