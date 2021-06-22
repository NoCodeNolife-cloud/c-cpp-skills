#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1(4, 5);
    Point p2(6, 8);
    cout << p1 << endl;
    cout << p2 << endl;

    if (p1 < p2) {
        cout << "p1<p2\n";
    } else {
        cout << "p1>=p2\n";
    }
    return 0;
}
