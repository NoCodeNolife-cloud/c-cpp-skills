#pragma once
#include <iostream>
using namespace std;

class Grand {
private:
	int hold;
public:
	Grand(int h = 0) :hold(h) {
		return;
	}
	virtual void Speak()const {
		cout << "I am a grand class!" << endl;
		return;
	}
	virtual int Value()const {
		return hold;
	}
};
