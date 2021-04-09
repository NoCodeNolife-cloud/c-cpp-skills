#include <vector>
#include <iostream>
using namespace std;
class Function {
public:
	vector<string> characterSegmentation(string& str) {
		vector<string> res;
		str.erase(0, str.find_first_not_of(' '));
		str.erase(str.find_last_not_of(' ') + 1);
		while (!str.empty()) {
			if (str.find(' ') == string::npos) {
				res.push_back(str);
				break;
			}
			res.push_back(str.substr(0, str.find_first_of(' ')));
			str.erase(0, str.find_first_of(' ') + 1);
		}
		return res;
	}
};
int main()
{
	string str = " hello lintcode and a is b for a    ";
	Function function;
	vector<string>res = function.characterSegmentation(str);
	for (string x : res) {
		cout << x << endl;
	}
	system("pause");
	return 0;
}