#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 = "the";
    string string2 = "obj";

    cout << string1 + " " + string2 << endl;

    string1.append(string2, 0, 2);
    cout << string1 << endl;

    string2.append(3, 'i');
    cout << string2 << endl;

    string1.append(string2.begin(),string2.end());
    cout<<string1<<endl;

    return 0;
}
