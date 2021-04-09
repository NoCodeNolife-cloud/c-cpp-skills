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
	string saveBinary(int n) {
		vector<int>num(32, 0);
		if (n >= 0) {
			int index = 0;
			while (n != 0) {
				num[index] = n % 2;
				index++;
				n /= 2;
			}
		}
		else {
			n = abs(n);
			int index = 0;
			while (n != 0) {
				num[index] = n % 2;
				index++;
				n /= 2;
			}
			size_t size = num.size();
			for (int i = 0; i < size; ++i) {
				if (num[i] == 0) {
					num[i] = 1;
				}
				else {
					num[i] = 0;
				}
			}
			for (int i = 0; i < size; i++) {
				if (num[i] == 0) {
					num[i] = 1;
					break;
				}
				else {
					num[i] = 0;
				}
			}
		}
		reverse(num.begin(), num.end());
		string res;
		size_t size = num.size();
		for (int i = 0; i < size; i++) {
			char temp = num[i] + '0';
			res += temp;
		}
		return res;
	}
};
int main()
{
	Function function;
	cout << function.saveBinary(-16);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}