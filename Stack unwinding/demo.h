#pragma once
#include <iostream>
#include <string>
using namespace std;

class demo
{
private:
	string word;
public:
	demo(const string& str) {
		word = str;
		cout << "demo " << word << " created" << endl;
		return;
	}
	~demo() {
		cout << "demo " << word << " destroyed" << endl;
		return;
	}
	void show()const {
		cout << "demo " << word << " lives!" << endl;
		return;
	}
};
