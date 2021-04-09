#include <iostream>
#include "stack.h"
#include "Crab.h"
using namespace std;

int main() {
	Crab<Stack>nebula;
	int ni;
	double nb;
	cout << "Enter int double pairs, such as 4 3.5 (0 0 to end): " << endl;
	while (cin >> ni >> nb && nb > 0) {
		if (!nebula.push(ni, nb)) {
			break;
		}
	}
	while (nebula.pop(ni, nb)) {
		cout << ni << ", " << nb << endl;
	}
	cout << "Done." << endl;
	return 0;
}