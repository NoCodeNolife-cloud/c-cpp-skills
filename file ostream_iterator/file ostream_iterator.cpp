#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out );
	std::vector<int>vec_1 ( 10 );

	// initialize
	int i = 0;
	for ( std::vector<int>::iterator iter = vec_1.begin (); iter != vec_1.end (); ++iter , ++i ) {
		*iter = i;
	}

	std::copy ( vec_1.begin () , vec_1.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// exit
	fout.close ();
	system ( "PAUSE" );
	std::exit ( EXIT_SUCCESS );
}