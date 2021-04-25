#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

namespace cod {
	void PRINT_ELEMENTS ( std::vector<int> _x ) {
		std::fstream fout ( "out.txt" , std::ios::app );// open file
		for ( int item : _x ) {
			fout << item << " ";
		}
		fout << std::endl;
		fout.close ();// close file
		return;
	}
}

int main () {
	std::vector<int> coll;// declare vector
	std::back_insert_iterator<std::vector<int>>iter ( coll );// create back inserter for coll

	// insert elements with the ususal iterator interface
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	cod::PRINT_ELEMENTS ( coll );// print
	std::back_inserter ( coll ) = 44;
	std::back_inserter ( coll ) = 55;
	cod::PRINT_ELEMENTS ( coll );

	// use back inserter to append all elements again
	coll.reserve ( 2 * coll.size () );
	std::copy ( coll.begin () , coll.end () , std::back_inserter ( coll ) );

	cod::PRINT_ELEMENTS ( coll );// print

	return 0;// exit
}