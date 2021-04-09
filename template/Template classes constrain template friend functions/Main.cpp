#include <iostream>
#include "HasFriendT.h"
using namespace std;

int main() {
	counts<int>();
	HasFriendT<int>hfi1(10);
	HasFriendT<int>hfi2(20);
	HasFriendT<double>hfdb(10.5);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "counts<int>() output:" << endl;
	counts<int>();
	cout << "counts<double>() output:" << endl;
	counts<double>();
	return 0;
}