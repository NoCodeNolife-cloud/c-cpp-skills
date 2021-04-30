#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "compose_f_gx_hx_t.h"

template<typename T>
void PRINT_ELEMENTS ( T& _coll ) {
	for ( auto pos = _coll.begin (); pos != _coll.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}

int main () {
	std::vector<int>coll;

	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	PRINT_ELEMENTS ( coll );

	// 判断某值是否大于4且小于7
	coll.erase ( std::remove_if ( coll.begin () , coll.end () , compose_f_gx_hx ( std::logical_and<bool> () , std::bind2nd ( std::greater<int> () , 4 ) , std::bind2nd ( std::less<int> () , 7 ) ) ) , coll.end () );

	PRINT_ELEMENTS ( coll );

	system ( "PAUSE" );
}