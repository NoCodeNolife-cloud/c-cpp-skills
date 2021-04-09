#include <iostream>
double warming = 0.3;//全局变量
void update(double dt);
void local();
void main() {
	using namespace std;
	cout << "Global warming is "
		<< warming
		<< " degrees."
		<< endl;
	update(0.1);
	cout << "Global warming is "
		<< warming
		<< " degrees."
		<< endl;
	local();
	cout << "Global warming is "
		<< warming
		<< " degrees."
		<< endl;
	return;
}