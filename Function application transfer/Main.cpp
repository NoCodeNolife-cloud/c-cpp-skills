#include "head.h"

/**
 * @brief main
 * @return
*/
int main()
{
	function fun;
	fun.printrefrence();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}