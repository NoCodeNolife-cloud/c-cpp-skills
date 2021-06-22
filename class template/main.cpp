#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data<int> intData(50);
    cout << intData << endl;

    Data<double> doubleData(50.50);
    cout << doubleData << endl;

    return 0;
}
