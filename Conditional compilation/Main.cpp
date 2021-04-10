#include "head.h"

#define DB

int main()
{
	function func;
#if defined(DB)
	func.run();
#else
	func.error();
#endif
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}