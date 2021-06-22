#include <iostream>
#include "BasePlus.h"

int main() {

    BasePlus basePlus(1, 2, 3, 4);
    cout << "basePlus.getPrivatevalue()=" << basePlus.getPrivatevalue() << endl;
    cout << "basePlus.getProtectedvalue()=" << basePlus.getProtectedvalue() << endl;
    cout << "basePlus.getDerivedprivatevalue()=" << basePlus.getDerivedprivatevalue()
         << endl;
    cout << "basePlus.getDerivedprotectedvalue()=" << basePlus.getDerivedprotectedvalue()
         << endl;

    return 0;
}
