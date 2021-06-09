#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << "pow(5,2)=" << pow(5, 2) << endl;
    cout << "exp(5)=" << exp(5) << endl;
    cout << "sqrt(25)=" << sqrt(25) << endl;
    cout << "log(10)=" << log(10) << endl;
    cout << "log10(10)=" << log10(10) << endl;
    cout << "sin(0)=" << sin(0) << endl;
    cout << "cos(0)=" << cos(0) << endl;
    cout << "tan(0)=" << tan(0) << endl;
    cout << "sinh(0)=" << sinh(0) << endl;
    cout << "cosh(0)=" << cosh(0) << endl;
    cout << "tanh(0)=" << tan(0) << endl;
    cout << "asin(0)=" << asin(0) << endl;
    cout << "acos(0)=" << acos(0) << endl;
    cout << "atan(0)=" << atan(0) << endl;
    cout << "ceil(2.25)=" << ceil(2.25) << endl;
    cout << "floor(2.25)=" << floor(2.25) << endl;
    cout << "fabs(-2.25)=" << fabs(-2.25) << endl;
    cout << "fmod(20.25,3.5)=" << fmod(20.25, 3.5) << endl;

    srand(time(nullptr));
    cout << rand() << endl;
    cout << "abs(-2.25)=" << abs(-2.25) << endl;
    cout << "labs(-252125212)=" << labs(-252125212);

    return 0;
}
