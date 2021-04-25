#include <iostream>
#include <iterator>
#include <fstream>

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );// open file

	std::istream_iterator<int> intReader ( std::cin );// create istream iterator that reads integers from cin
	std::istream_iterator<int> intReaderEOF;// create end-of-stream iterator

	//write them twice
	while ( intReader != intReaderEOF ) {
		fout << "once: " << *intReader << std::endl;
		fout << "once again: " << *intReader << std::endl;
		++intReader;
	}

	fout.close ();// close file
	return 0;// exit
}