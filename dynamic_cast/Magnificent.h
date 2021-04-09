#pragma once
#include "Superb.h"
#include <iostream>
using namespace std;

class Magnificent :
	public Superb
{
private:
	char ch;
public:
	Magnificent(int h = 0, char c = 'A') :Superb(h), ch(c) {
		return;
	}
	void Speak()const {
		cout << "I am a magnigicent class!!!" << endl;
	}
	void Say()const {
		cout << "I hold the character " << ch << " and the integer " << Value() << "!" << endl;
		return;
	}
};
