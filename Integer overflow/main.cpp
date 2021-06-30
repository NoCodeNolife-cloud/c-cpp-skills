#include <iostream>
#include <valarray>

using namespace std;

int main() {
    string str;
    int sum = 0;
    str = "0^2";
    sum += pow(2, 0);
    cout << str << "=" << sum << endl;
    for (int i = 1; i < 31; ++i) {
        str += "+" + to_string(i) + "^2";
        sum += pow(2, i);
        cout << str << "=" << sum << endl;
    }
    cout << INT_MAX << endl;/*即INT_MAX等于2^0+2^1+2^2+...+2^31,32位数*/

    return 0;
}
