#pragma once
#include <iostream>
using namespace std;

template<typename C, typename D>
void show2(C& c, D& d) {
	cout << c.item << ", " << d.item << endl;
	return;
}