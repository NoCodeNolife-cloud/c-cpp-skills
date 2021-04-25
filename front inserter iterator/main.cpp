#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>

namespace cod {
	void PRINT_ELEMENTS ( std::list<int> _x ) {
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
	std::list<int> coll;// declare vector
	std::front_insert_iterator<std::list<int>>iter ( coll );// create front inserter for coll

	// insert elements with the ususal iterator interface
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	cod::PRINT_ELEMENTS ( coll );// print
	std::front_inserter ( coll ) = 44;
	std::front_inserter ( coll ) = 55;
	cod::PRINT_ELEMENTS ( coll );

	// use back inserter to append all elements again
	std::copy ( coll.begin () , coll.end () , std::front_inserter ( coll ) );

	cod::PRINT_ELEMENTS ( coll );// print

	return 0;// exit
}