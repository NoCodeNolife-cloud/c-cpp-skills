/*
inline只用于内容重复，但代码很短的函数，避免出栈入栈消耗额外的时间
*/
#include <iostream>
inline double square(double x) {
	return x * x;
}
void main() {
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = "
		<< a
		<< endl
		<< "b = "
		<< b
		<< endl
		<< "c squared = "
		<< square(c++)
		<< endl
		<< "Now c = "
		<< c
		<< endl;
	return;
}