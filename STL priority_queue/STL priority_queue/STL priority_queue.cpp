#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	priority_queue<int> que;
	if (que.empty()) {

		for (int i = 5; i >= 0; --i) {

			que.push(i);
		}
	}

	cout << "front = " << que.top() << endl;
}