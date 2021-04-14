#include <iostream>
#include <fstream>
#include <string>
#include <map>

namespace cod {
	int Multiply ( std::pair<int , int> para_pair );
}

int main ( int argc , char* argv [] ) {
	std::pair<int , std::string>ppair ( 245 , "yeziyu" );/*pair*/
	std::fstream fout ( "out.txt" , std::ios::out );
	fout << "ppair.first = " << ppair.first << std::endl << "ppair.second = " << ppair.second << std::endl;
	std::map<int , std::string>mmap;/*map*/
	mmap [ 2 ] = "liangjiawen";/*initialize*/
	mmap [ 4 ] = "yangjingtao";
	fout << "map is \n";
	for ( std::pair<int , std::string> x : mmap ) {/*print*/
		fout << x.first << " : " << x.second << std::endl;
	}
	std::pair<int , int>p_compair ( 5 , 12 );
	std::pair<int , int>p_compair_another ( 5 , 13 );
	if ( p_compair == p_compair_another ) {/*compair pair*/
		fout << "p_compair = p_compair_another";
	} else if ( p_compair > p_compair_another ) {
		fout << "p_compair > p_compair_another\n";
	} else {
		fout << "p_compair < p_compair_another\n";
	}
	/*make_pair function*/
	fout << cod::Multiply ( std::make_pair ( 5 , 12 ) ) << std::endl;
	return 0;
}

int cod::Multiply ( std::pair<int , int> para_pair ) {
	return para_pair.first * para_pair.second;
}