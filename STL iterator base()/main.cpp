#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );// open file
	std::list<int>coll;// assertion list

	// insert elements from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	std::list<int>::iterator pos = std::find ( coll.begin () , coll.end () , 5 );// find position of elements with value 5
	fout << "*pos: " << *pos << std::endl;// print value of the element
	std::list<int>::reverse_iterator rpos ( pos );// convert iterator to reverse iterator
	fout << "rpos: " << *rpos << std::endl;// print value of the element to which the reverse iterator refers
	std::list<int>::iterator rrpos = rpos.base ();// convert reverse iterator back to normal iterator
	fout << "rrpos: " << *rrpos << std::endl;

	fout.close ();// close file
	return 0;// exit
}