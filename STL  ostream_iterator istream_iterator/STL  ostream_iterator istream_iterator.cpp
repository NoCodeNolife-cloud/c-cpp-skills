#include <iostream>
#include <string>
#include <algorithm>

int main () {
	std::istream_iterator<std::string> cinPos ( std::cin );
	std::ostream_iterator<std::string> coutPos ( std::cout , " " );

	while ( cinPos != std::istream_iterator<std::string> () ) {
		std::advance ( cinPos , 2 );
		if ( cinPos != std::istream_iterator<std::string> () ) {
			*coutPos++ = *cinPos++;
		}
	}
	std::cout << std::endl;

	return 0;
}