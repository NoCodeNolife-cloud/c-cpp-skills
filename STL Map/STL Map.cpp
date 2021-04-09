#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	map<int, int> res;
	res[10] = 15;
	res[5] = 10;
	/// <summary>
	/// use array method
	/// </summary>
	/// <returns> </returns>
	res[5] = 5;
	map<int, int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
	cout << "The run time is: " << (double)clock() / CLOCKS_PER_SEC << "s" << endl;
	cout << endl;
	/// <summary>
	/// use map method
	/// </summary>
	/// <returns></returns>
	res.insert(pair<int, int>(5, 20));
	for (iter = res.begin(); iter != res.end(); iter++) {
		cout << iter->second << ":" << iter->second << endl;
	}
	cout << "The run time is: " << (double)clock() / CLOCKS_PER_SEC << "s" << endl;
	cout << endl;
	/// <summary>
	/// find method
	/// </summary>
	/// <returns></returns>
	if (res.find(10) != res.end()) {
		cout << "find\n" << endl;
		cout << res.find(10)->first << ":" << res.find(10)->second << endl;
	}
	else {
		cout << "not find\n" << endl;
	}
	system("pause");
	return 0;
}