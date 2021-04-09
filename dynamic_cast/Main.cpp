#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Grand.h"
#include "Magnificent.h"
#include "Superb.h"
#include "Function.h"
using namespace std;

int main() {
	srand(time(0));
	Grand* pg = nullptr;
	Superb* ps = nullptr;
	for (int i = 0; i < 5; i++) {
		pg = GetOne();
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg)) {
			ps->Say();
		}
	}
	return 0;
}