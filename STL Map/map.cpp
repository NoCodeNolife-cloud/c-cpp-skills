#include <map>
#include <fstream>

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::out );

	// map
	std::map<int , int , std::less<int>>map_less;
	std::map<int , int , std::greater<int>>map_greater;

	// initialize
	for ( int i = 0; i < 10; ++i ) {
		map_less [ i ] = rand () % 100;
		map_greater [ i ] = rand () % 100;
	}

	// print
	fout << "map_less:\n";
	for ( std::pair<int , int> item : map_less ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "map_less size is " << map_less.size () << std::endl;

	// print
	fout << "map_greater:\n";
	for ( std::pair<int , int> item : map_greater ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "map_greater size is " << map_greater.size () << std::endl;

	// erase
	map_greater.erase ( 7 );
	fout << "map_greater:\n";
	for ( std::pair<int , int> item : map_greater ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "map_greater size is " << map_greater.size () << std::endl;

	// intert
	map_greater.insert ( std::make_pair ( 11 , 253 ) );
	map_greater.insert ( std::pair<int , int> ( 50 , 22 ) );
	map_greater.insert ( std::map<int , int>::value_type ( 100 , 22.3 ) );

	// print
	fout << "map_greater:\n";
	for ( std::pair<int , int> item : map_greater ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "map_greater size is " << map_greater.size () << std::endl;

	// multimap
	std::multimap<int , int , std::less<int>>mul_map_less;

	// initial
	mul_map_less.insert ( std::make_pair<int , int> ( 1 , 3 ) );
	mul_map_less.insert ( std::make_pair<int , int> ( 11 , 25 ) );
	mul_map_less.insert ( std::make_pair<int , int> ( 4 , 12 ) );
	mul_map_less.insert ( std::make_pair<int , int> ( 6 , 10 ) );
	mul_map_less.insert ( std::make_pair<int , int> ( 4 , 8 ) );

	// print
	fout << "mul_map_less:\n";
	for ( std::pair<int , int> item : mul_map_less ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "mul_map_less size is " << map_greater.size () << std::endl;

	// erase
	for ( std::multimap<int , int>::iterator iter = mul_map_less.begin (); iter != mul_map_less.end (); ) {
		if ( iter->first == 4 ) {
			mul_map_less.erase ( iter++ );
		} else {
			++iter;
		}
	}

	// print
	fout << "mul_map_less:\n";
	for ( std::pair<int , int> item : mul_map_less ) {
		fout << item.first << " " << item.second << std::endl;
	}
	fout << "mul_map_less size is " << map_greater.size () << std::endl;

	// close file
	fout.close ();

	// exit
	std::exit ( EXIT_SUCCESS );
}