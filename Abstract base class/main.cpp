#include <iostream>
#include "base.h"
#include "derived.h"

using namespace std;

int main(char argc, char* argv[]) {
	Derived* pDerived = new Derived;/*new point*/
	delete pDerived;/*destructor*/
	return 0;
}