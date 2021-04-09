#include <iostream>
#include "ManyFriend.h"
#include "Function.h"
using namespace std;

int main() {
	ManyFriend<int>hfi1(10);
	ManyFriend<int>hfi2(20);
	ManyFriend<double>hfdb(10.5);
	cout << "hfi1, hfi2: ";
	show2(hfi1, hfi2);
	cout << "hfdb, hfi2: ";
	show2(hfdb, hfi2);
	return true;
}