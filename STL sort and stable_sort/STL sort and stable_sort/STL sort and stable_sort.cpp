#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<class T>
inline void PRINT_ELEMENTS ( const T& coll , const char* optcstr = "" ) {
	typename T::const_iterator pos;
	std::cout << optcstr;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}

template<class T>
inline void INSERT_ELEMENTS ( T& coll , int first , int last ) {
	for ( int i = first; i <= last; ++i ) {
		coll.insert ( coll.end () , i );
	}
}

class random {

public:

	int operator()() {
		return rand () % 100;
	}
};

int main () {

	vector<int>vec ( 10 );
	std::generate ( vec.begin () , vec.end () , random () );

	for ( int item : vec ) {
		cout << item << " ";
	}
	cout << endl;

	sort ( vec.begin () , vec.end () );

	for ( int item : vec ) {
		cout << item << " ";
	}
	cout << endl;

	list<int>lis ( 15 );
	generate ( lis.begin () , lis.end () , random () );

	for ( int item : lis ) {
		cout << item << " ";
	}
	cout << endl;

	lis.sort ();

	for ( int item : lis ) {
		cout << item << " ";
	}
	cout << endl;

	system ( "pause" );
}