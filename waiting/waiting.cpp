#include <iostream>
#include <ctime>
void function(int para_secs/*延迟时间*/) {
	using namespace std;
	clock_t delay = para_secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay);
}//延迟函数
void main() {
	using namespace std;
	cout << "Enter the dalay time, in seconds:";
	float secs;
	cin >> secs;
	cout << "starting"
		<< endl;
	function(secs);
	cout << "done"
		<< endl;
	return;
}