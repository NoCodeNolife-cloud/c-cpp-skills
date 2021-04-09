/*
引用变量
typename & name = subject
就像声明中的char*指的是指向char的指针一样,
int &指的是指向int的引用
*/
#include <iostream>
void exchange(int& para_i, int& para_j) {
	auto temp_k = para_i;
	para_i = para_j;
	para_j = temp_k;
	return;
}//交换value
void main() {
	using namespace std;
	int i, j;
	cout << "befor\ti = ";
	cin >> i;
	cout << "\tj = ";
	cin >> j;
	exchange(i, j);
	cout << "--------------------"
		<< endl
		<< "Now \ti = "
		<< i
		<< endl
		<< "\tj = "
		<< j
		<< endl;
	return;
}