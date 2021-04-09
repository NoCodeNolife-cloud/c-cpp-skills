#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int intnum[] = { 1,3,5,2,0,4,6,9,7 };
	reverse(intnum, intnum + 9);
	for (int x : intnum) {
		cout << setw(2) << left << x;
	}
	cout << endl;

	char charnum[] = { 'h','a','p','p','y' };
	reverse(charnum, charnum + 5);
	for (char x : charnum) {
		cout << setw(2) << left << x;
	}
	cout << endl;

	vector<int>vecnum = { 1,3,5,7,9,8,6,4,2,0 };
	reverse(vecnum.begin(), vecnum.end());
	for (int x : vecnum) {
		cout << setw(2) << left << x;
	}
	cout << endl;
	system("pause");
	return 0;
}