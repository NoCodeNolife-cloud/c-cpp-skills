#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class RANDOM {

public:

	int operator()()const {

		return rand () % 50;
	}
};

int main () {

	// 种子
	srand ( time ( NULL ) );

	// 定义数组
	vector<int>vec;
	vec.resize ( 100 );

	// 初始化数组
	generate ( vec.begin () , vec.end () , RANDOM () );

	sort ( vec.begin () , vec.end () );

	// 打印
	for ( int item : vec ) {

		cout << item << " ";
	}
	cout << endl;

	for ( vector<int>::iterator pos = vec.begin (); pos <= lower_bound ( vec.begin () , vec.end () , 15 ); ++pos ) {

		cout << *pos << " ";
	}
	cout << endl;

	for ( vector<int>::iterator pos = vec.begin (); pos <= upper_bound ( vec.begin () , vec.end () , 15 ); ++pos ) {

		cout << *pos << " ";
	}
	cout << endl;

	system ( "pause" );
}