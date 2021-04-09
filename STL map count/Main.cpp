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
	void count(string& str) {
		map<char, int> hash;
		size_t size = str.size();
		for (int i = 0; i < size; ++i) {
			if (hash.find(str[i]) == hash.end()) {
				hash[str[i]] = 1;
			}
			else {
				++hash[str[i]];
			}
		}
		map<char, int>::iterator iter;
		for (iter = hash.begin(); iter != hash.end(); ++iter) {
			cout << setw(2) << left << iter->first << iter->second << endl;
		}
		return;
	}
};
int main()
{
	string str = "5fag/4156a7g+[]p[]4faw;eG-AE+5.][.";
	Function function;
	function.count(str);
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}