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
	string decimalToHexadecimal(int decimalnum) {
		vector<int>count;
		while (decimalnum != 0) {
			count.push_back(decimalnum % 16);
			decimalnum /= 16;
		}
		reverse(count.begin(), count.end());
		string res;
		vector<int>::iterator iter;
		for (iter = count.begin(); iter != count.end(); iter++) {
			char temp;
			if (*iter >= 10) {
				temp = *iter - 10 + 'a';
			}
			else {
				temp = *iter + '0';
			}
			res.push_back(temp);
		}
		return res;
	}
	int HexadecimalToDecimal(string hexadecimalnum) {
		vector<int>count;
		for (int i = 0; i < hexadecimalnum.size(); ++i) {
			if (hexadecimalnum[i] >= 'a') {
				count.push_back(hexadecimalnum[i] - 'a' + 10);
			}
			else {
				count.push_back(hexadecimalnum[i] - '0');
			}
		}
		int res = 0;
		for (int i = 0; i < count.size(); i++) {
			res += count[i] * pow(16, count.size() - i - 1);
		}
		return res;
	}
};
int main()
{
	Function function;
	cout << function.decimalToHexadecimal(1660) << endl;
	string hexadecimal = "67c";
	cout << function.HexadecimalToDecimal(hexadecimal) << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}