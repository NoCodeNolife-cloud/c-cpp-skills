#include <iostream>
#include <vector>
#include <functional>
#include <fstream>
#include <algorithm>

template<class T1 , class T2>
struct fopow :public std::binary_function<T1 , T2 , T1> {
	T1 operator()( T1 base , T2 exp )const {
		return std::pow ( base , exp );
	}
};

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );
	std::vector<int>coll;

	// insert
	for ( int i = 1; i <= 9; ++i ) {
		coll.push_back ( i );
	}

	std::transform ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) , std::bind1st ( fopow<float , int> () , 3 ) );
	fout << std::endl;

	std::transform ( coll.begin () , coll.end () , std::ostream_iterator<int> ( fout , " " ) , std::bind2nd ( fopow<float , int> () , 3 ) );
	fout << std::endl;

	fout.close ();
}