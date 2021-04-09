#pragma once
#include <string>
using namespace std;

class Report
{
private:
	string str;
public:
	Report(const string s) :str(s) {
		cout << "Object created!" << endl;
		return;
	}
	~Report() {
		cout << "Object delected!" << endl;
		return;
	}
	void comment()const {
		cout << str << endl;
		return;
	}
};
