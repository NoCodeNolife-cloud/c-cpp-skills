// head
#include <iostream>
#include <string>
#include <deque>
#include <fstream>
#include <iomanip>
#include <algorithm>

// object
class Point {
public:
	int x;
	int y;
};

// compare
bool cmp ( const Point& p1 , const Point& p2 ) {
	if ( p1.x > p2.x ) {
		return true;
	} else if ( p1.x == p2.x and p1.y > p2.y ) {
		return true;
	} else {
		return false;
	}
}

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	// point collection
	std::deque<Point> coll ( 50 );

	// random
	srand ( time ( NULL ) );

	// initialize the point
	for ( Point& item : coll ) {
		item.x = rand () % 100;
		item.y = rand () % 100;
	}

	// sort Point
	std::sort ( coll.begin () , coll.end () , cmp );

	// print Point
	for ( Point item : coll ) {
		fout << std::setw ( 5 ) << std::left << item.x << item.y << std::endl;
	}

	// close the file
	fout.close ();

	// exit
	std::exit ( EXIT_SUCCESS );
}