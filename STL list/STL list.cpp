#include <iostream>
#include <list>
#include <iomanip>
#include <fstream>

namespace cod {
	template<typename T>
	bool cmp ( T para_x , T para_y ) {
		return para_x > para_y ? true : false;
	}
}

int main () {
	// file open
	std::fstream fout ( "out.txt" , std::ios::out );

	// list
	std::list<int>lis;

	// initialize
	for ( int i = 0; i < 10; ++i ) {
		lis.push_front ( i );
		lis.push_back ( i );
	}

	// print
	for ( int itm : lis ) {
		fout << std::setw ( 5 ) << std::left << itm;
	}
	fout << std::endl;

	// print size
	fout << "size is " << lis.size () << std::endl;

	// pop
	lis.pop_back ();
	lis.pop_front ();

	// print
	for ( int itm : lis ) {
		fout << std::setw ( 5 ) << std::left << itm;
	}
	fout << std::endl;

	// sort
	lis.sort ( cod::cmp<int> );

	// print
	for ( int itm : lis ) {
		fout << std::setw ( 5 ) << std::left << itm;
	}
	fout << std::endl;

	// reverse
	lis.reverse ();

	// print
	fout << "after reverse\n";
	for ( int itm : lis ) {
		fout << std::setw ( 5 ) << std::left << itm;
	}
	fout << std::endl;

	// insert
	lis.insert ( ++lis.begin () , 5 );

	// print
	fout << "after insert\n";
	for ( int itm : lis ) {
		fout << std::setw ( 5 ) << std::left << itm;
	}
	fout << std::endl;

	// file close
	fout.close ();

	// eixt
	std::exit ( EXIT_SUCCESS );
}