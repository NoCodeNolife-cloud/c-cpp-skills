#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main () {
	std::vector<int>vector1 = { 1,2,3,5,7,8,18,19,21,24,35,39,41 };
	std::vector<int>vector2 = { 1,2,5,9,11,25,35,48 };

	for ( std::vector<int>::iterator pos = vector1.begin (); pos != vector1.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;

	for ( std::vector<int>::iterator pos = vector2.begin (); pos != vector2.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;

	std::vector<int>res;
	res.resize ( vector1.size () + vector2.size () );
	std::merge ( vector1.begin () , vector1.end () , vector2.begin () , vector2.end () , res.begin () );

	for ( std::vector<int>::iterator pos = res.begin (); pos != res.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;

	system ( "pause" );
}