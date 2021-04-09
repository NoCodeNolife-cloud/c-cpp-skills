#pragma once
#include "Grand.h"
#include <iostream>
using namespace std;

class Superb :public Grand {
public:
	Superb(int h = 0) :Grand(h) {
		return;
	}
	void Speak()const {
		cout << "I am a superb class!!" << endl;
		return;
	}
	virtual void Say()const {
		cout << "I hold the superb value of " << Value() << "!" << endl;
		return;
	}
};