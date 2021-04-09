#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
class Useless {
private:
	int n;
	char* pc;
	static int ct;
	void ShowObject()const {
		cout << "Number of elements: " << n;
		cout << "Data address: " << (void*)pc << endl;
	}
public:
	Useless() {
		++ct;
		n = 0;
		pc = nullptr;
		cout << "default constructor called;number of objects: " << ct << endl;
		ShowObject();
	}
	explicit Useless(int k) :
		n(k) {
		++ct;
		cout << "int constructor called; number of objects: " << ct << endl;
		pc = new char[n];
		ShowObject();
	}
	Useless(int k, char ch) {
		++ct;
		cout << "int constructor called; number of objects: " << ct << endl;
		pc = new char[n];
		for (int i = 0; i < n; i++) {
			pc[i] = ch;
		}
		ShowObject();
	}
	Useless(const Useless& f) :
		n(f.n) {
		++ct;
		cout << "copy const called; number of objects: " << ct << endl;
		pc = new char[n];
		for (int i = 0; i < n; i++) {
			pc[i] = f.pc[i];
		}
		ShowObject();
	}
	Useless(Useless&& f) :
		n(f.n) {
		++ct;
		cout << "move constructor called; number of objects: " << ct << endl;
		pc = f.pc;
		f.pc = nullptr;
		f.n = 0;
		ShowObject();
	}
	~Useless() {
		cout << "destructor called; objects left: " << --ct << endl;
		cout << "deleted object:\n";
		ShowObject();
		delete[]pc;
	}
	Useless operator+(const Useless& f)const {
		cout << "Enter operator+()\n";
		Useless temp = Useless(n + f.n);
		for (int i = 0; i < n; i++) {
			temp.pc[i] = pc[i];
		}
		for (int i = n; i < temp.n; i++) {
			temp.pc[i] = f.pc[i - n];
		}
		cout << "temp object:\n";
		cout << "Leaving operator+()\n";
		return temp;
	}
	void ShowData()const {
		if (n == 0) {
			cout << "(Object empty)";
		}
		else {
			for (int i = 0; i < n; i++) {
				cout << pc[i];
			}
		}
		cout << endl;
	}
};
int Useless::ct = 0;