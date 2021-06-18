#include <iostream>

using namespace std;

// enumerate
enum Color {
    READ,/*read value=0*/
    GREEN,/*green value=1*/
    BLUE/*bule value=2*/
};

ostream &print(ostream &os, Color _color) {
    os << _color;
    return os;
}

int main() {
    Color color;
    color = READ;
    print(cout, color) << endl;
    color = GREEN;
    print(cout, color) << endl;
    color = BLUE;
    print(cout, color) << endl;
    return 0;
}
