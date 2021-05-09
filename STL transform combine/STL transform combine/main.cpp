#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <list>

template<class T>
inline void PRINT_ELEMENTS ( const T& coll , const char* optcstr = "" ) {
	std::fstream fout ( "out.txt" , std::ios::app );
	typename T::const_iterator pos;
	fout << optcstr;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		fout << *pos << " ";
	}
	fout << std::endl;
	fout.close ();
}

template<class T>
inline void INSERT_ELEMENTS ( T& coll , int first , int last ) {
	for ( int i = first; i <= last; ++i ) {
		coll.insert ( coll.end () , i );
	}
}

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );
	std::vector<int> coll1;
	std::list<int>coll2;

	INSERT_ELEMENTS ( coll1 , 1 , 9 );
	PRINT_ELEMENTS ( coll1 , "coll1: " );

	std::transform ( coll1.begin () , coll1.end () , coll1.begin () , coll1.begin () , std::multiplies<int> () );
	PRINT_ELEMENTS ( coll1 , "squared: " );

	std::transform ( coll1.begin () , coll1.end () , coll1.rbegin () , std::back_inserter ( coll2 ) , std::plus<int> () );
	PRINT_ELEMENTS ( coll2 , "coll2: " );

	fout << "diff: ";
	std::transform ( coll1.begin () , coll1.end () , coll2.begin () , std::ostream_iterator<int> ( fout , " " ) , std::minus<int> () );
	fout << std::endl;

	fout.close ();
	system ( "pause" );
}