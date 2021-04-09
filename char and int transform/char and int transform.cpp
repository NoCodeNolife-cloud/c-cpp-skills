#include <iostream>
using namespace std;
class Function {
public:
	int charToInt(char& n) {
		return n - '0';
	}
	char intToChar(int& n) {
		return n + '0';
	}
};
int main()
{
	Function function;
	int intnum = 1;
	char res1 = function.intToChar(intnum);
	cout << res1 << endl;
	char charnum = '5';
	int res2 = function.charToInt(charnum);
	cout << res2 << endl;
	system("pause");
	return 0;
}