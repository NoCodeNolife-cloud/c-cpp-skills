﻿#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ostringstream outstr;
	string hdisk;
	cout << "What's the name of your hard disk? ";
	getline(cin, hdisk);
	int cap;
	cout << "What's its capacity in GB? ";
	cin >> cap;
	outstr << "The hard disk " << hdisk << " has a capacicy of " << cap << " gigabytes." << endl;
	string result = outstr.str();
	cout << result;
	return 0;
}