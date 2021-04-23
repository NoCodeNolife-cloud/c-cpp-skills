#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

int main () {
	// file
	std::string FILE_NAME = "file.txt";// change file
	std::string TMP_NAME = "tmp.txt";// temporary file
	std::fstream fout ( TMP_NAME , std::ios::out );// write
	std::fstream fin ( FILE_NAME , std::ios::in );// read

	// if not open
	if ( !fin.is_open () ) {
		return 1;
	}

	// read file and change file contents
	while ( !fin.eof () ) {
		std::string tmp;
		fin >> tmp;
		fout << tmp << " ";
		if ( tmp == "5" ) {
			fout << "100 ";
		}
	}

	// close file
	fin.close ();
	fout.close ();

	// remove file
	const char* deletefilename = FILE_NAME.c_str ();
	const char* renameefilename = TMP_NAME.c_str ();
	std::remove ( deletefilename );

	// rename file
	if ( std::rename ( renameefilename , deletefilename ) ) {
		return 1;
	} else {
		return 0;
	}
}