#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	cout << "str:";
	cin >> str;

	string target = "loupe";

	if (str > target) {

		cout << str << ">" << target << endl;
	}
	else {

		cout << str << "<" << target << endl;
	}
}