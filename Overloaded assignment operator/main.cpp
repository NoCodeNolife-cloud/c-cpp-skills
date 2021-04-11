#include <iostream>
#include <fstream>
#include "point.h"

using namespace std;

int main(
	char argc,
	char* argv[]) {
	fstream fout("out.txt", ios::out);
	Point cpointone;
	Point cpointtwo(25, 26.3);
	fout << "cpointtwo:\n";
	fout << "x = " << cpointtwo.x << endl << "y = " << cpointtwo.y << endl;
	cout << "enter the x : ";
	cin >> cpointtwo.x;
	fout << "cpointtwo:\n";
	fout << "x = " << cpointtwo.x << endl << "y = " << cpointtwo.y << endl;
	cpointone = cpointtwo;
	fout << "cpointone:\n";
	fout << "x = " << cpointone.x << endl << "y = " << cpointone.y << endl;
	fout.close();
	system("pause");
	return 0;
}