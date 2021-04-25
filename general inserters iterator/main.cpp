#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include <fstream>

namespace cod {
	void PRINT_ELEMENTS ( std::list<int> _x ) {
		std::fstream fout ( "out.txt" , std::ios::app );// open file
		for ( std::list<int>::iterator iter = _x.begin (); iter != _x.end (); ++iter ) {
			fout << *iter << " ";
		}
		fout << std::endl;
		fout.close ();// close file
		return;
	}

	void PRINT_ELEMENTS ( std::set<int> _x ) {
		std::fstream fout ( "out.txt" , std::ios::app );// open file
		for ( std::set<int>::iterator iter = _x.begin (); iter != _x.end (); ++iter ) {
			fout << *iter << " ";
		}
		fout << std::endl;
		fout.close ();// close file
		return;
	}
}

int main () {
	std::set<int> coll;// declare vector
	std::insert_iterator<std::set<int>>iter ( coll , coll.begin () );// create insert inserter for coll

	// insert elements with the ususal iterator interface
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	cod::PRINT_ELEMENTS ( coll );// print
	std::inserter ( coll , coll.end () ) = 44;
	std::inserter ( coll , coll.end () ) = 55;
	cod::PRINT_ELEMENTS ( coll );

	// use inserter to insert all elements into a list
	std::list<int>coll2;
	std::copy ( coll.begin () , coll.end () , std::inserter ( coll2 , coll2.begin () ) );
	cod::PRINT_ELEMENTS ( coll2 );// print

	// use inserter to reinsert all elements into the list before the second element
	std::copy ( coll.begin () , coll.end () , std::inserter ( coll2 , ++coll2.begin () ) );

	cod::PRINT_ELEMENTS ( coll2 );// print

	return 0;// exit
}