#include <iostream>
#include "Base.h"
#include "Plus.h"

using namespace std;

int main() {
    Plus<double> plus(25.5, 365.2);
    cout << plus.base.x << "  " << plus.y << endl;
    Base<int> base(5);
    cout << base.x << endl;
    return 0;
}
