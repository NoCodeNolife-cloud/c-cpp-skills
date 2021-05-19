#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>

using namespace std;

class random {

public:

	int operator()()const {

		return rand () % 100;
	}
};

int main () {

	fstream fout ( "out.txt" , ios::out );

	srand ( time ( NULL ) );

	vector<int>vec ( 100 );

	generate ( vec.begin () , vec.end () , random () );

	partial_sort ( vec.begin () , vec.begin () + 5 , vec.end () );

	for ( int item : vec ) {

		fout << setw ( 5 ) << left << item;
	}
	fout << endl;
}