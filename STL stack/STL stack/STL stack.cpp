#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	stack<int> stk;

	cout << "size = " << stk.size() << endl;

	stk.push(6);
	cout << "size = " << stk.size() << endl;

	stk.push(5);
	cout << "size = " << stk.size() << endl;

	stk.push(4);
	cout << "size = " << stk.size() << endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.top() = 10;
	cout << stk.top() << endl;

	cout << "size = " << stk.size() << endl;
}