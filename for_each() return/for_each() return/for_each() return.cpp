#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "MeanValue.h"

int main () {
	std::vector<int>coll;
	for ( int i = 1; i <= 8; ++i ) {
		coll.push_back ( i );
	}
	MeanValue mv = std::for_each ( coll.begin () , coll.end () , MeanValue () );
	std::cout << "mean value: " << mv.value () << std::endl;
	system ( "PAUSE" );
}