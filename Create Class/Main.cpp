#include "head.h"

using namespace std;

int main()
{
	Point pt1;
	pt1.show();
	Point pt2(50, 60);
	pt2.show();
	Point pt3(pt2);
	pt3.show();
	Point pt4 = pt1;
	pt4.show();
	pt3 = pt1 - pt2;
	pt3.show();
	pt4 = pt1 + pt2;
	pt4.show();
	cout << "\ntime: " << double(clock()) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}