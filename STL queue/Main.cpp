#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	queue<int>que;
	que.push(1);
	cout << que.size() << endl;
	que.push(2);
	cout << que.size() << endl;
	que.push(3);
	cout << que.size() << endl;
	cout << que.front() << endl;
	cout << que.front() << endl;
	que.pop();
	cout << que.front() << endl;
	cout << que.size() << endl;
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}