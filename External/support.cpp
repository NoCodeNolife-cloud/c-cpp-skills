#include <iostream>
extern double warming;//extern外部变量
void update(double dt);
void local();
void update(double dt) {
	using namespace std;
	extern double warming;//该声明可选,指出该函数被设计成使用外部变量
	warming += dt;//使用外部变量
	cout << "Updating global warming to "
		<< warming//全局外部变量
		<< " degrees."
		<< endl;
	return;
}
void local() {
	using namespace std;
	double warming = 0.8;
	cout << "Local warming = "
		<< warming
		<< " degrees."
		<< endl
		<< "But global warming = "
		<< ::warming//作用域解析符"::",放在变量名前面时,该运算符表示使用变量的全局版本
		<< " degrees."
		<< endl;
	return;
}