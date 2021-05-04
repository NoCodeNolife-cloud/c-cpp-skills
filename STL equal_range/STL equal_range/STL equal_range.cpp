#include <iostream>
#include <algorithm>
#include <set>

int main () {
	std::multiset<int>set_1 = { 1,2,3,4,5,6,7,8,9,10,1,1,1,2 };
	std::set<int>set_2 = { 1,2,3,4,11,12,13 };

	std::pair <std::set<int>::iterator , std::set<int>::iterator> res = std::equal_range ( set_1.begin () , set_1.end () , 1 );

	for ( std::set<int>::iterator pos = res.first; pos != res.second; ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;

	system ( "pause" );
}