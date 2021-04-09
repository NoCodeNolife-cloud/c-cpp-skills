#include <algorithm>//sort头文件
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int pu[] = { 5,8,2,4,6,7,9,3,1 };
	vector<int> pt = { 5,6,3,2,2,1,4,7,9,5,12,15,64 };
	sort(pu, pu + 9, less<int>());
	for (int x : pu) {
		cout << x << " ";
	}
	cout << endl;
	sort(pu, pu + 9, greater<int>());
	for (int x : pu) {
		cout << x << " ";
	}
	cout << endl;
	sort(pt.begin(), pt.end(), less<int>());
	for (int y : pt) {
		cout << y << " ";
	}
	cout << endl;
	sort(pt.begin(), pt.end(), greater<int>());
	for (int y : pt) {
		cout << y << " ";
	}
	cout << endl;
	return 0;
}