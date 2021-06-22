#include <iostream>

using namespace std;

template<class T>
void function(T a) {
    cout << a << endl;
}

int main() {
    int intvalue = 10;
    double doublevalue = 52.05;
    function(intvalue);
    function(doublevalue);

    return 0;
}
