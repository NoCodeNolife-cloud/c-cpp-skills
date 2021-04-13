#include "base.h"

code::Base::Base ( int paraa ) {
	a = paraa;
	return;
}

void code::Base::show () {
	std::fstream fout ( "out.txt" , std::ios::app | std::ios::out );
	fout << "a = " << a << std::endl;
	fout.close ();
	return;
}