#include <fstream>
#include <set>
#include "RuntimeCmp.h"
#include "function.h"

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out );

	// create set
	std::set<int , cod::RuntimeCmp<int>> coll1;

	// fill set
	cod::fill ( coll1 );

	// print
	fout << "coll1:\t";
	for ( int x : coll1 ) {
		fout << x << " ";
	}
	fout << std::endl;

	// create sorting criterion with reverse element order
	cod::RuntimeCmp<int> reverse_order ( cod::RuntimeCmp<int>::reverse );

	// create, fill, and print set with reverse element order
	std::set<int , cod::RuntimeCmp<int>> coll2 ( reverse_order );
	cod::fill ( coll2 );
	fout << "coll2:\t";
	for ( int x : coll2 ) {
		fout << x << " ";
	}
	fout << std::endl;

	// assign elements AND sorting criterion
	coll1 = coll2;
	coll1.insert ( 3 );
	fout << "coll1:\t";
	for ( int x : coll2 ) {
		fout << x << " ";
	}
	fout << std::endl;

	// just to make sure
	if ( coll1.value_comp () == coll2.value_comp () ) {
		fout << "coll1 and coll2 have same sorting criterion" << std::endl;
	} else {
		fout << "coll1 and coll2 have different sorting criterion" << std::endl;
	}

	// close file
	fout.close ();

	// exit
	std::exit ( EXIT_SUCCESS );
}