#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    string str;
    cout << "input string:";
    cin >> str;
    cout << str << endl;

    cin.get();
    getline(cin, str);
    cout << str << endl;

    return 0;
}
