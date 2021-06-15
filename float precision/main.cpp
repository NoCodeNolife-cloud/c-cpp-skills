#include <bits/stdc++.h>

using namespace std;

int main() {

    /**
     * double value
     */
    double double_num = 3.1415926535;

    /**
     * use decimal counting
     */
    cout.setf(ios::fixed);

    /**
     * print without format
     */
    cout << double_num << endl;

    /**
     * set precision size as 15
     */
    cout.precision(15);
    cout << double_num << endl;

    /**
     * use scientific method
     */
    scientific(cout);

    cout << double_num << endl;

    return 0;
}
