#include "head.h"

int pages = 800;

int main()
{
	Function func;
	func.printpages();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}