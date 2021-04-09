#include "head.h"

int main()
{
	WriteOrderFile();
	ReadOrderFile();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}