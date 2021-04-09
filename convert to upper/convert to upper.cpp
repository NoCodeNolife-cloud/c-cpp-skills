#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	char str;
	cout << "Enter the string : ";
	cin >> str;
	cout << "The upper char is " << char(toupper(str));
	return 0;
}