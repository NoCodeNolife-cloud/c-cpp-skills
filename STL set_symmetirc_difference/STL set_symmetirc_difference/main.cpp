#include <iostream>
#include <vector>
#include <algorithm>

int main () {
	srand ( time ( NULL ) );

	std::vector<int>vec1 = { 1,2,3,8,6,4,7 };
	std::vector<int>vec2 = { 1,3,5,7,4,9 };

	std::sort ( vec1.begin () , vec1.end () );
	std::sort ( vec2.begin () , vec2.end () );

	std::cout << "vec1:";
	for ( int item : vec1 ) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2:";
	for ( int item : vec2 ) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	std::vector<int>cnt ( 10 , INT_MAX );
	std::set_symmetric_difference ( vec1.begin () , vec1.end () , vec2.begin () , vec2.end () , cnt.begin () );

	std::cout << "不同时位于vec1和vec2的所有元素，形成一个已序区间为:";
	for ( int item : cnt ) {
		if ( item != INT_MAX ) {
			std::cout << item << " ";
		}
	}
	std::cout << std::endl;

	system ( "pause" );
}