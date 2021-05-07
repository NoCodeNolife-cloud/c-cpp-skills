#include <iostream>
#include <algorithm>
#include <fstream>

int main () {
	std::copy ( std::istream_iterator<std::string> ( std::cin ) , std::istream_iterator<std::string> () , std::ostream_iterator<std::string> ( std::cout , "\n" ) );

	system ( "pause" );
}