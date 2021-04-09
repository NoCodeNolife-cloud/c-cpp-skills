#include <iostream>
#include <string>
using namespace std;
int main()
{
	string res;
	int a = 5;
	res = to_string(5);
	cout << res << endl;
	char b = 'F';
	res = string(1, b);
	cout << res << endl;
	system("pause");
	return 0;
}