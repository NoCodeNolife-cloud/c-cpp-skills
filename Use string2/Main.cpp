﻿#include <iostream>
#include <string>
using namespace std;

int main() {
	string empty;
	string small = "bit";
	string larger = "Elephants are a girl's best friend";
	cout << "Sizes:" << endl;
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;
	cout << "Capacities:" << endl;
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;
	empty.reserve(50);
	cout << "Capacity after empty.reservs(50): " << empty.capacity() << endl;
	return 0;
}