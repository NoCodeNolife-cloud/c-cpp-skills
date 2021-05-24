#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

	queue<int>que;

	cout << "initial size = " << que.size() << endl;

	que.push(5);
	cout << "after add, size = " << que.size() << endl;

	que.push(6);
	cout << "after add, size = " << que.size() << endl;

	que.push(7);
	cout << "after add, size = " << que.size() << endl;

	cout << "front = " << que.front() << endl;
	cout << "back = " << que.back() << endl;

	que.pop();
	cout << "after pop, size = " << que.size() << endl;
	cout << "front = " << que.front() << endl;
	cout << "back = " << que.back() << endl;
}