#include <iostream>
#include "Derived.h"

using namespace std;

int main() {
    auto *pderived = new Derived;
    delete pderived;

    return 0;
}
