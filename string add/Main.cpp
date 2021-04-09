#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
class Function {
public:
	string add(string str1, string str2) {
		string res;
		int m = str1.size();
		int n = str2.size();
		int carry = 0;
		for (int i = m - 1, j = n - 1; i >= 0 or j >= 0 or carry == 1; i--, j--) {
			int temp1, temp2;
			if (i >= 0) {
				temp1 = str1[i] - '0';
			}
			else {
				temp1 = 0;
			}
			if (j >= 0) {
				temp2 = str2[i] - '0';
			}
			else {
				temp2 = 0;
			}
			int sum = temp1 + temp2 + carry;
			carry = 0;
			if (sum >= 10) {
				carry = 1;
				sum %= 10;
			}
			res = to_string(sum) + res;
		}
		return res;
	}
};
int main()
{
	Function function;
	string str1 = "25891", str2 = "81524";
	cout << function.add(str1, str2);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}