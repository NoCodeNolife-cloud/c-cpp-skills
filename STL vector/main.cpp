#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>// vector head

using std::fstream;
using std::ios;
using std::left;
using std::setw;
using std::cin;
using std::endl;
using std::exit;
using std::vector;

// main
int main () {
	// file
	fstream fout ( "out.txt" , ios::out );

	// vector
	vector<int>vec;

	// push back from 0 to 9
	for ( int i = 0; i <= 9; ++i ) {
		vec.push_back ( i );
	}

	// print the A's item
	fout << "the A is\n";
	for ( vector<int>::iterator iter = vec.begin (); iter != vec.end (); ++iter ) {
		fout << setw ( 5 ) << left << *iter;
	}
	fout << endl;

	// print the size of A
	fout << "A size is " << vec.size () << endl;

	// copy the A to B
	vector<int>vec_same ( vec );

	// print the A's item
	fout << "A = B , then the B is\n";
	for ( vector<int>::iterator iter = vec_same.begin (); iter != vec_same.end (); ++iter ) {
		fout << setw ( 5 ) << left << *iter;
	}
	fout << endl;

	// call the B's constructor
	vec_same.~vector ();

	// print the B's size
	fout << "after delete B , the size is " << vec_same.size () << endl;

	// print the sequence of the five
	fout << "vec[5] = " << vec [ 5 ] << endl;

	// print the first of item
	fout << "the first item is " << vec.front () << endl;

	// print the end of item
	fout << "the second item is " << vec.back () << endl;

	// insert
	vec.insert ( vec.begin () , 2 );

	// print A
	fout << "the A is\n";
	for ( vector<int>::iterator iter = vec.begin (); iter != vec.end (); ++iter ) {
		fout << setw ( 5 ) << left << *iter;
	}
	fout << endl;

	// resize
	vec.resize ( 15 , -1 );

	// print A
	fout << "the A is\n";
	for ( vector<int>::iterator iter = vec.begin (); iter != vec.end (); ++iter ) {
		fout << setw ( 5 ) << left << *iter;
	}
	fout << endl;

	// print A
	fout << "max_size(): " << vec.max_size () << endl;
	fout << "size(): " << vec.size () << endl;
	fout << "capacity(): " << vec.capacity () << endl;

	// close file
	fout.close ();

	// exit
	exit ( EXIT_SUCCESS );
}