#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Function {
public:
	vector<int> splitNumber(int n) {
		vector<int>res;
		while (n != 0) {
			res.push_back(n % 10);
			n /= 10;
		}
		reverse(res.begin(), res.end());
		return res;
	}
	int assembleNumber(vector<int>vec) {
		int sum = 0;
		size_t size = vec.size();
		for (int i = size - 1; i >= 0; --i) {
			sum += vec[i] * pow(10, size - 1 - i);
		}
		return sum;
	}
};
int main()
{
	Function function;
	vector<int>res = function.splitNumber(36581);
	vector<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); ++iter) {
		cout << setw(3) << left << *iter;
	}
	cout << endl;
	cout << function.assembleNumber(res);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}