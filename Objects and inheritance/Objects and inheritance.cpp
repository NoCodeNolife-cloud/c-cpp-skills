/*
程序要求用户输入望远镜物镜和一些目镜的焦距,然后计算并显示每个目镜的方法倍数(放大倍数等于物镜的焦距除以目镜的焦距)
该程序还使用了一些格式化方法,用于cout和ofstream对象时作用相同
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int LIMIT = 5;
bool file_it(ostream& os, double fo, const double fe[], int n) {
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "Focal length of objective: "
		<< fo
		<< " mm"
		<< endl;
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "f.1. eyepiece";
	os.width(15);
	os << "magnigication"
		<< endl;
	for (int i = 0; i < n; i++) {
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5)
			<< endl;
	}
	os.setf(initial);
	return true;
}
int main() {
	ofstream fout;
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open()) {
		cout << "Can't open "
			<< fn
			<< ".Bye"
			<< endl;
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "Enter the focal length of your telescope objective in mm:";
	cin >> objective;
	double eps[LIMIT];
	cout << "Enter the focal lengths, in mm, of "
		<< LIMIT
		<< " eyepieces:"
		<< endl;
	for (int i = 0; i < LIMIT; i++) {
		cout << "Eyepiece #"
			<< i + 1
			<< ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done"
		<< endl;
	return 0;
}