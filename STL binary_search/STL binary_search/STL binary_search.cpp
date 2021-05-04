#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main () {
	std::vector<int> vec_1 = { 1,5,9,3,7,4,2,6,8,10 };
	std::vector<int> vec_2 = { 1,2,3,4,5,6,7,8,9,10 };

	// version one
	// not orderd
	std::cout << "vec_1:\n";
	std::cout << "find 5:";
	if ( std::find ( vec_1.begin () , vec_1.end () , 5 ) != vec_1.end () ) {
		std::cout << "find" << std::endl;
	} else {
		std::cout << "not find" << std::endl;
	}
	std::cout << "find 15:";
	if ( std::find ( vec_1.begin () , vec_1.end () , 15 ) != vec_1.end () ) {
		std::cout << "find" << std::endl;
	} else {
		std::cout << "not find" << std::endl;
	}

	// version two
	// orderd
	std::cout << "vec_2:\n";
	std::cout << "find 5:";
	if ( std::binary_search ( vec_2.begin () , vec_2.end () , 5 ) ) {
		std::cout << "find" << std::endl;
	} else {
		std::cout << "not find" << std::endl;
	}
	std::cout << "find 15:";
	if ( std::find ( vec_2.begin () , vec_2.end () , 15 ) != vec_2.end () ) {
		std::cout << "find" << std::endl;
	} else {
		std::cout << "not find" << std::endl;
	}

	system ( "pause" );
}