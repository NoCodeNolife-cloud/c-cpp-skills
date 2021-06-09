#include <iostream>
#include <string>

using namespace std;

int main() {

    const string string1 = "target";

    string tmp = string1;

    string string2 = "INSERT";

    cout << string1 << endl;

    // method 1
    tmp.insert(0, string2);

    cout << tmp << endl;

    tmp = string1;

    // method 2
    tmp.insert(0, string2, 2, 1);

    cout << tmp << endl;

    tmp = string1;

    char char1[] = {'T', 'E', 'S', 'T'};

    // method 3
    tmp.insert(0, char1);

    cout << tmp << endl;

    return 0;
}
