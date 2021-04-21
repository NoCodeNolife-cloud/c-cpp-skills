#include "functon.h"

void cod::printCountedPtr ( CountedPtr<int>elem ) {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	// print elem
	fout << *elem << " ";

	// close file
	fout.close ();

	// return
	return;
}