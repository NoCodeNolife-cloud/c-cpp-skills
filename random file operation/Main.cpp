#include "head.h"

int main()
{
	WriteRandowFile();
	ReadRandomFile();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}