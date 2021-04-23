#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out );// open file
	std::list<int>coll;// STL list

	// inset elements from 1 to 9
	for ( int i = 1; i <= 9; i++ ) {
		coll.push_back ( i );
	}

	std::list<int>::iterator pos = coll.begin ();// assertion
	fout << *pos << std::endl;// print actual element
	std::advance ( pos , 3 );// step three elements forward
	fout << *pos << std::endl;// print actual element
	std::advance ( pos , -1 );// step one element backward
	fout << *pos << std::endl;// print actual element

	fout.close ();// close file
}