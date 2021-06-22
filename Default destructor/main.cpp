#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    int value = 4;
    {
        Data data(value);
    }
    cout << value;

    return 0;
}
