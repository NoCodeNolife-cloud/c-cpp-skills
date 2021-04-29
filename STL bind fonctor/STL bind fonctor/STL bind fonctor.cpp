#include <iostream>
#include <vector>
#include <fstream>
#include <functional>

int main () {
	std::fstream fout ( "out.txt" , std::ios::app );

	int a [] = { 1, 2, 100, 200 };

	std::vector< int> arr ( a , a + 4 );

	// 移除所有小于100的元素
	arr.erase ( std::remove_if ( arr.begin () , arr.end () , std::bind2nd ( std::less<int> () , 100 ) ) , arr.end () );

	for ( int item : arr ) {
		fout << item << " ";
	}
	fout << std::endl;

	std::vector< int> arr2 ( a , a + 4 );

	// 移除所有大于100的元素
	arr2.erase ( std::remove_if ( arr2.begin () , arr2.end () , std::bind1st ( std::less<int> () , 100 ) ) , arr2.end () );

	for ( int item : arr2 ) {
		fout << item << " ";
	}
	fout << std::endl;

	fout.close ();
}