#include "head.h"

int main()
{
	Function function;
	function.printsizeof();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}