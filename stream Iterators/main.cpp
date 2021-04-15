#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main () {
	std::vector<std::string> coll;
	std::copy ( std::istream_iterator<std::string> ( std::cin ) , std::istream_iterator<std::string> () , std::back_inserter ( coll ) );// read all words from the standard input
	sort ( coll.begin () , coll.end () );// sort elements
	std::unique_copy ( coll.begin () , coll.end () , std::ostream_iterator<std::string> ( std::cout , "\n" ) );// print all elements without duplicates
	system ( "pause" );// check for the result
	std::exit ( EXIT_SUCCESS );// exit
}