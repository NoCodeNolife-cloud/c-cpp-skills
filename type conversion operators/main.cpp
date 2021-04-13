#include <iostream>
#include <fstream>
#include "base.h"
#include "probaseone.h"
#include "probasetwo.h"

int main ( char argc , char* argv [] ) {
	std::fstream fout ( "out.txt" , std::ios::out );
	double testnum;
	std::cout << "double value = ";
	std::cin >> testnum;
	fout << static_cast< int >( testnum ) << std::endl;
	code::Base cbase ( 25 );
	code::ProBaseOne cprobaseone ( 35 , 18 );
	code::ProBaseTwo cprobasetwo ( 35 , 26 );
	/*code::ProBaseOne* cprobaseone = dynamic_cast<code::ProBaseOne*> (cbase);*/
	cbase.show ();
	cprobaseone.show ();
	cprobasetwo.show ();
	fout.close ();
	system ( "pause" );
	return 0;
}