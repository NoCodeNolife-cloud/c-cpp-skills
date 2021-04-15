#include <iostream>
#include <limits>
#include <fstream>
#include <string>

int main () {
	std::fstream fout ( "out.txt" , std::ios::out );
	std::cout << std::boolalpha;

	// print amximum of intergral types
	fout << "max(short): " << std::numeric_limits<short>::max () << std::endl;
	fout << "max(int): " << std::numeric_limits<int>::max () << std::endl;
	fout << "max(long): " << std::numeric_limits<long>::max () << std::endl;
	fout << std::endl;

	// print maximum of floating-point types
	fout << "max(float): " << std::numeric_limits<float>::max () << std::endl;
	fout << "max(double): " << std::numeric_limits<double>::max () << std::endl;
	fout << "max(long double): " << std::numeric_limits<long double>::max () << std::endl;
	fout << std::endl;

	// print whether char is signed
	fout << "is_signed(char): " << std::boolalpha << std::numeric_limits<char>::is_signed << std::endl;
	fout << std::endl;

	// print whether numeric limits for type string exist
	fout << "is_specialized(string): " << std::boolalpha << std::numeric_limits<std::string>::is_specialized << std::endl;

	// int
	fout << std::boolalpha;
	fout << "Minimum value for int: " << std::numeric_limits<int>::min () << std::endl;
	fout << "Maximum value for int: " << std::numeric_limits<int>::max () << std::endl;
	fout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
	fout << "Non-sign bits in int: " << std::numeric_limits<int>::digits << std::endl;
	fout << "int has infinity: " << std::numeric_limits<int>::has_infinity << std::endl;

	fout << "Minimum value for float: " << std::numeric_limits<float>::min () << std::endl; // min returns the smallest positive value the type can encode, not the lowest
	fout << "Lowest value for float: " << std::numeric_limits<float>::lowest () << std::endl; // the lowest value
	fout << "Maximum value for float: " << std::numeric_limits<float>::max () << std::endl;
	fout << "float is signed: " << std::numeric_limits<float>::is_signed << std::endl;
	fout << "Non-sign bits in float: " << std::numeric_limits<float>::digits << std::endl;
	fout << "float has infinity: " << std::numeric_limits<float>::has_infinity << std::endl;

	// unsigned short
	fout << "Minimum value for unsigned short: " << std::numeric_limits<unsigned short>::min () << std::endl;
	fout << "Maximum value for unsigned short: " << std::numeric_limits<unsigned short>::max () << std::endl;

	// float
	fout << "is_specialized(float): " << std::numeric_limits<float>::is_specialized << std::endl;
	fout << "is_integer(float): " << std::numeric_limits<float>::is_integer << std::endl;
	fout << "is_exact(float): " << std::numeric_limits<float>::is_exact << std::endl;
	fout << "is_bounded(float): " << std::numeric_limits<float>::is_bounded << std::endl;
	fout << "is_modulo(float): " << std::numeric_limits<float>::is_modulo << std::endl;
	fout << "is_iec559(float): " << std::numeric_limits<float>::is_iec559 << std::endl;
	fout << "digits10(float): " << std::numeric_limits<float>::digits10 << std::endl;
	fout << "radix(float): " << std::numeric_limits<float>::radix << std::endl;
	fout << "min_exponent(float): " << std::numeric_limits<float>::min_exponent << std::endl;
	fout << "max_exponent(float): " << std::numeric_limits<float>::max_exponent << std::endl;
	fout << "min_exponent10(float): " << std::numeric_limits<float>::min_exponent10 << std::endl;
	fout << "max_exponent10(float): " << std::numeric_limits<float>::max_exponent10 << std::endl;
	fout << "epsilon(float): " << std::numeric_limits<float>::epsilon () << std::endl;
	fout << "round_style(float): " << std::numeric_limits<float>::round_style << std::endl;

	// float
	fout << "The smallest nonzero denormalized value for float: "
		<< std::numeric_limits<float>::denorm_min () << std::endl;
	fout << "The difference between 1 and the smallest value greater than 1 for float: "
		<< std::numeric_limits<float>::epsilon () << std::endl;
	fout << "Whether float objects allow denormalized values: "
		<< std::numeric_limits<float>::has_denorm << std::endl;
	fout << "Whether float objects can detect denormalized loss: "
		<< std::numeric_limits<float>::has_denorm_loss << std::endl;
	fout << "Whether float objects have quiet_NaN: "
		<< std::numeric_limits<float>::has_quiet_NaN << std::endl;
	fout << "Whether float objects have a signaling_NaN: "
		<< std::numeric_limits<float>::has_signaling_NaN << std::endl;
	fout << "The base for type float is:  "
		<< std::numeric_limits<float>::radix << std::endl;
	fout << "The maximum rounding error for type float is:  "
		<< std::numeric_limits<float>::round_error () << std::endl;
	fout << "The rounding style for a double type is: "
		<< std::numeric_limits<double>::round_style << std::endl;
	fout << "The signaling NaN for type float is:  "
		<< std::numeric_limits<float>::signaling_NaN () << std::endl;
	fout << "Whether float types can detect tinyness before rounding: "
		<< std::numeric_limits<float>::tinyness_before << std::endl;
	fout << "Whether float types have implemented trapping: "
		<< std::numeric_limits<float>::traps << std::endl;

	// exit
	fout.close ();
	return 0;
}