#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include "Compose_f_gx_t.h"

void PRINT_ELEMENTS ( std::vector<int> _coll ) {
	for ( std::vector<int>::iterator pos = _coll.begin (); pos != _coll.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}

int main () {
	std::vector<int>coll;

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	PRINT_ELEMENTS ( coll );

	// and 10 then multiply 5
	std::transform ( coll.begin () , coll.end () , std::ostream_iterator<int> ( std::cout , " " ) , compose_f_gx ( std::bind2nd ( std::multiplies<int> () , 5 ) , std::bind2nd ( std::plus<int> () , 10 ) ) );
	std::cout << std::endl;

	system ( "PAUSE" );
}