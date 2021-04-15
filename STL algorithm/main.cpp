#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <list>

namespace cod {
	bool cmp ( int , int );
}

int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
	srand ( time ( NULL ) );// rand seed
	std::list<int>list_test ( 50 );// create LIST

	// initialize LIST and print
	for ( int& x : list_test ) {
		x = rand () % 100 + 1;
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	std::list<int>::iterator iter;// ITERATOR

	// get MAX
	iter = std::max_element ( list_test.begin () , list_test.end () );
	fout << "the max is " << *iter << std::endl;

	// get MIN
	iter = std::min_element ( list_test.begin () , list_test.end () );
	fout << "the min is " << *iter << std::endl;

	// sort
	list_test.sort ( cod::cmp );
	fout << "after sort\n";
	for ( int x : list_test ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// reverse
	std::reverse ( list_test.begin () , list_test.end () );
	fout << "after reverse\n";
	for ( int x : list_test ) {
		fout << std::setw ( 5 ) << std::left << x;
	}
	fout << std::endl;

	// fint item
	int target = 15;
	iter = std::find ( list_test.begin () , list_test.end () , target );
	if ( iter != list_test.end () ) {
		fout << "the " << target << " is find in the list\n";
	} else {
		fout << "not find\n";
	}
	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}

namespace cod {
	bool cmp ( int para_a , int para_b ) {
		return ( para_a > para_b ? true : false );
	}
}