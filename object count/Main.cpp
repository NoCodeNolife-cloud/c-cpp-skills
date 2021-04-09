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
	vector<pair<char, int>> CountNumber(string str) {
		vector<pair<char, int>>count;
		if (str.size() == 0) {
			return count;
		}
		else {
			pair<char, int>temp;
			temp.first = str[0];
			temp.second = 1;
			count.push_back(temp);
			size_t strsize = str.size();
			for (int i = 1; i < strsize; ++i) {
				bool find = false;
				size_t countsize = count.size();
				for (int j = 0; j < countsize; ++j) {
					if (count[j].first == str[i]) {
						++count[j].second;
						find = true;
						break;
					}
				}
				if (!find) {
					temp.first = str[i];
					temp.second = 1;
					count.push_back(temp);
				}
			}
			return count;
		}
	}
};
int main()
{
	Function function;
	string str = "tr#ew79uio5pv*!xbf$$a5#5_+sdrt__<[";
	vector<pair<char, int>>res = function.CountNumber(str);
	for (int i = 0; i < res.size(); ++i) {
		cout << setw(4) << left << res[i].first << res[i].second << endl;
	}
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}