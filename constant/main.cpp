#include <iostream>

using namespace std;

int main() {
    const int fee = 2;
    const int c = 0365;
    const int d = 0x55ff;
    const int e = 0x55FF;
    const unsigned uVal = 256u;
    const long lVal = 0x7FFFFEL;
    const unsigned long ulVal = 076342ul;
    cout << fee << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << uVal << endl;
    cout << lVal << endl;
    cout << ulVal << endl;

    const char schar = 'a';
    const wchar_t wchar = L'\x81\x19';
    cout << schar << endl;
    cout << wchar << endl;

    const double d1 = 18.46;
    const double d2 = 38.;
    const double d3 = 18.46e0;
    const double d4 = 18.46e1;
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << d4 << endl;

    char szStr[] = "12""34";
    cout << szStr << endl;

    return 0;
}
