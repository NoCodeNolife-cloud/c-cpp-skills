#include <iostream>
#include <map>
#include <fstream>
#include <string>

// MAIN
int main () {
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
	typedef std::multimap<int , std::string> IntStringMMap;// TYPE of the COLLECTION
	IntStringMMap coll;// CONTAIN for INT/STRING VALUES

	//INSERT some elements in arbitrary order
	coll.insert ( std::make_pair ( 5 , "tagged" ) );
	coll.insert ( std::make_pair ( 2 , "a" ) );
	coll.insert ( std::make_pair ( 1 , "this" ) );
	coll.insert ( std::make_pair ( 4 , "of" ) );
	coll.insert ( std::make_pair ( 6 , "strings" ) );
	coll.insert ( std::make_pair ( 1 , "is" ) );
	coll.insert ( std::make_pair ( 3 , "multimap" ) );

	//coll [ 5 ] = "tagged";
	//coll [ 2 ] = "a";
	//coll [ 1 ] = "this";
	//coll [ 4 ] = "of";
	//coll [ 6 ] = "strings";
	//coll [ 1 ] = "is";
	//coll [ 3 ] = "multimap";

	// PRINT all element VALUES
	IntStringMMap::iterator pos;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		fout << pos->second << " ";
	}

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}