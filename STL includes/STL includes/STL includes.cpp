#include <iostream>
#include <set>
#include <algorithm>

int main () {
	std::set<int>set_1 = { 8,7,14,1,2,74,85,8,5,3,5 };
	std::set<int>set_2 = { 74,85,3,1 };
	if ( std::includes ( set_2.begin () , set_2.end () , set_1.begin () , set_1.end () ) ) {
		std::cout << "include\n";
	} else {
		std::cout << "not include\n";
	}

	if ( std::includes ( set_1.begin () , set_1.end () , set_2.begin () , set_2.end () ) ) {
		std::cout << "include\n";
	} else {
		std::cout << "not include\n";
	}

	system ( "pause" );
}