/*
默认参数
对于带参数列表的函数，必须从右向左添加默认值。也就是说，要为某个参数设置默认值，则必须为它右边的所有参数提供默认值
实参按从左到右的顺序依次被赋给相应的形参，而不能跳过任何参数
*/
#include <iostream>
const int ArSize = 80;
char* left(const char* str, int n = 1) {
	if (n < 0) {
		n = 0;
	}
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++) {
		p[i] = str[i];
	}
	while (i <= n) {
		p[i++] = '\0';
	}
	return p;
}int main() {
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string:"
		<< endl;
	cin.get(sample, ArSize);
	char* ps = left(sample, 4);
	cout << ps << endl;
	delete[]ps;
	ps = left(sample);//使用默认参数
	cout << ps << endl;
	delete[]ps;
	return 0;
}