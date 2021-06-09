#include <iostream>
#include <string>

using namespace std;

int main() {

    // STRING
    string string1 = "targetinfor";
    string tmp = "INSERT";

    // REPLACE
    string1.replace(0, tmp.size(), tmp);
    cout << string1 << endl;

    string1.replace(string1.begin(), string1.begin() + 3, 10, '|');

    cout << string1 << endl;

    // STRING
    string string2 = "TTTT";
    tmp = "RRRR";

    // REPLACE
    string2.replace(string2.begin(), string2.begin() + 1, tmp.begin(), tmp.end());

    cout << string2 << endl;

    // EXIT
    return 0;
}
