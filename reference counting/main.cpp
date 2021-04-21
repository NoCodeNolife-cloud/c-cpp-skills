#include <fstream>
#include <list>
#include <deque>
#include <algorithm>
#include "CountedPtr.h"
#include "functon.h"

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	static int values [] = { 3,5,9,1,6,4 };

	// assign
	typedef cod::CountedPtr<int> IntPtr;
	std::deque<IntPtr> coll1;
	std::list<IntPtr>coll2;

	// insert
	for ( int i = 0; i < sizeof ( values ) / sizeof ( values [ 0 ] ); ++i ) {
		IntPtr ptr ( new int ( values [ i ] ) );
		coll1.push_back ( ptr );
		coll2.push_front ( ptr );
	}

	// print contents
	std::for_each ( coll1.begin () , coll1.end () , cod::printCountedPtr );
	fout << std::endl;
	std::for_each ( coll2.begin () , coll2.end () , cod::printCountedPtr );
	fout << std::endl;

	// modify values
	*coll1 [ 2 ] *= *coll1 [ 2 ];
	( **coll1.begin () ) *= -1;
	( **coll2.begin () ) = 0;

	// print contents
	std::for_each ( coll1.begin () , coll1.end () , cod::printCountedPtr );
	fout << std::endl;
	std::for_each ( coll2.begin () , coll2.end () , cod::printCountedPtr );
	fout << std::endl;

	// close file
	fout.close ();
}