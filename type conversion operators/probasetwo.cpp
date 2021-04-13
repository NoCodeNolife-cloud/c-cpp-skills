#include "probasetwo.h"

code::ProBaseTwo::ProBaseTwo ( int paraa , int parac ) :Base ( paraa ) , c ( parac ) {
	return;
}

void code::ProBaseTwo::show () {
	std::fstream fout ( "out.txt" , std::ios::app | std::ios::out );
	fout << "a = " << a << std::endl << "c = " << c << std::endl;
	fout.close ();
	return;
}