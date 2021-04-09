#include <iostream>
#include "head.h"
void main() {
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Enter a line:"
		<< endl;
	cin.get(input, ArSize);//输入数组
	while (cin) {//空输入退出
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit):"
			<< endl;
		cin.get(input, ArSize);//继续输入
	}
	cout << "Bye"
		<< endl;
	return;
}