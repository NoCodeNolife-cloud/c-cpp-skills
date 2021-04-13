#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main ( int argc , char* argv [] ) {
	std::pair<int , std::string>ppair ( 245 , "yeziyu" );/*pair*/
	std::fstream fout ( "out.txt" , std::ios::out );
	fout << "ppair.first = " << ppair.first << std::endl << "ppair.second = " << ppair.second << std::endl;
	std::map<int , std::string>mmap;/*map*/
	mmap [ 2 ] = "liangjiawen";
	mmap [ 4 ] = "yangjingtao";
	fout << "map is \n";
	for ( std::pair<int , std::string> x : mmap ) {
		fout << x.first << " : " << x.second << std::endl;
	}
	return 0;
}