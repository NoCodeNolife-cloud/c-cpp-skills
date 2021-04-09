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
	vector<string> splitString(string str) {
		vector<string>res;
		istringstream ss(str);
		string s;
		while (ss >> s) {
			res.push_back(s);
		}
		return res;
	}
};
int main()
{
	string str = "You are my sunshine";
	Function function;
	vector<string>res = function.splitString(str);
	vector<string>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << *iter << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}