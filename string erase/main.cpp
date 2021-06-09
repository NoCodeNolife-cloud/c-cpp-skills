#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 = "Target";
    cout << "string1->" + string1 << endl;

    string1.clear();
    cout << "clear->" + string1 << endl;

    string1 = "new Target";
    cout << "new->" + string1 << endl;

    string1.erase();
    cout << "erase->" + string1 << endl;

    string1 = "0123456789";
    string1.erase(2, 5);
    cout << "delete->" + string1 << endl;

    return 0;
}
