#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
bool cmp(int a, int b) {
	if (a >= b) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	vector<int>vec(10);
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		*iter = rand() % 100;
	}
	sort(vec.begin(), vec.end(), cmp);
	for (int x : vec) {
		cout << setw(4) << left << x;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}