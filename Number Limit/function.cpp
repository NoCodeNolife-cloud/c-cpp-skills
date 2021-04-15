#include "function.h"

namespace cod {
	void printSize () {
		std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
		std::cout << "sizeof typename\n";

		std::cout << std::setw ( 15 ) << std::left << "typename" << std::setw ( 15 ) << std::left << "size" << std::endl;// Get the size of the parameter
		std::cout << std::setw ( 15 ) << std::left << "short" << std::setw ( 15 ) << std::left << sizeof ( short ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "int" << std::setw ( 15 ) << std::left << sizeof ( int ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "float" << std::setw ( 15 ) << std::left << sizeof ( float ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "long" << std::setw ( 15 ) << std::left << sizeof ( long ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "double" << std::setw ( 15 ) << std::left << sizeof ( double ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "long long" << std::setw ( 15 ) << std::left << sizeof ( long long ) << std::endl;

		fout.close ();// exit
		return;
	}

	void printLimits () {
		std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );
		std::cout << "max of the typename\n";

		std::cout << std::setw ( 15 ) << std::left << "typename" << std::setw ( 15 ) << std::left << "value" << std::endl;// Get the scope of the parameter
		std::cout << std::setw ( 15 ) << std::left << "CHAR_BIT" << std::setw ( 15 ) << std::left << ( CHAR_BIT ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "SCHAR_MIN" << std::setw ( 15 ) << std::left << ( SCHAR_MIN ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "SCHAR_MAX" << std::setw ( 15 ) << std::left << ( SCHAR_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "UCHAR_MAX" << std::setw ( 15 ) << std::left << ( UCHAR_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "CHAR_MIN" << std::setw ( 15 ) << std::left << ( CHAR_MIN ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "CHAR_MAX" << std::setw ( 15 ) << std::left << ( CHAR_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "MB_LEN_MAX" << std::setw ( 15 ) << std::left << ( MB_LEN_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "SHRT_MIN" << std::setw ( 15 ) << std::left << ( SHRT_MIN ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "SHRT_MAX" << std::setw ( 15 ) << std::left << ( SHRT_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "INT_MIN" << std::setw ( 15 ) << std::left << ( INT_MIN ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "INT_MAX" << std::setw ( 15 ) << std::left << ( INT_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "UINT_MAX" << std::setw ( 15 ) << std::left << ( UINT_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "LONG_MIN" << std::setw ( 15 ) << std::left << ( LONG_MIN ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "LONG_MAX" << std::setw ( 15 ) << std::left << ( LONG_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "ULONG_MAX" << std::setw ( 15 ) << std::left << ( ULONG_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "LLONG_MAX" << std::setw ( 15 ) << std::left << ( LLONG_MAX ) << std::endl;
		std::cout << std::setw ( 15 ) << std::left << "ULLONG_MAX" << std::setw ( 15 ) << std::left << ( ULLONG_MAX ) << std::endl;

		fout.close ();// exit
		return;
	}
}