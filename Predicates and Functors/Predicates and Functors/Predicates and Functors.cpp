#include <iostream>
#include <list>
#include <algorithm>

class Nth {
private:
	int nth;
	int count;
public:
	Nth ( int n ) :nth ( n ) , count ( 0 ) {}
	bool operator()( int ) {
		return ++count == nth;
	}
};

template<typename T>
void Print ( std::list<T> _list ) {
	for ( T item : _list ) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

int main () {
	std::list<int>coll;
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}
	Print ( coll );

	std::list<int>::iterator pos = std::remove_if ( coll.begin () , coll.end () , Nth ( 3 ) );
	coll.erase ( pos , coll.end () );
	Print ( coll );

	system ( "PAUSE" );
}