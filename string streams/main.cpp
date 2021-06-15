#include <bits/stdc++.h>

using namespace std;

int main() {

//    ostringstream
    ostringstream os;


    os << "dec: " << 15 << hex << " hex: " << 15 << endl;

//    print os
    cout << os.str() << endl;

    bitset<15> b(5789);
    os << "float: " << 4.67 << " bitset: " << b << endl;

    os.seekp(0);
    os << "oct: " << oct << 15;

//    os to string
    cout << os.str() << endl;

    return 0;
}
