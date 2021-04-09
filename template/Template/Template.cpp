/*
函数模板

template<typename T>
typename functionname(typename parametername)
{
	use T as typename
}

函数模板不能缩短可执行程序。最终的代码不包含任何模板，而只包含了为程序生成的实际函数
好处：使生成的多个函数定义更简单、更可靠
*/
#include <iostream>
const int Lim = 8;
template<typename T>//函数模板
void Swap(T& a, T& b) {//按引用递参
	T temp;
	temp = a;
	a = b;
	b = temp;
	return;
}
template<typename T>//函数模板
void Swap(T a[], T b[], int n) {
	T temp;
	for (int i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return;
}
void Show(int a[]) {
	using namespace std;
	cout << a[0]
		<< a[1]
		<< "/"
		<< a[2]
		<< a[3]
		<< "/";
	for (int i = 4; i < Lim; i++) {
		cout << a[i];
	}
	cout << endl;
	return;
}//打印数组
void main() {
	using namespace std;
	int i = 10, j = 20;
	cout << "i,j = "
		<< i
		<< ", "
		<< j
		<< "."
		<< endl
		<< "Using complier-generated int swapper:"
		<< endl;
	Swap(i, j);
	cout << "Now i, j = "
		<< i
		<< ", "
		<< j
		<< "."
		<< endl;
	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
	cout << "Original arrays:"
		<< endl;
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);
	cout << "Swapped arrays:"
		<< endl;
	Show(d1);
	Show(d2);
	return;
}