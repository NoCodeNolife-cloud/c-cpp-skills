#include <iostream>
#include <string>

using namespace std;

int main() {

//     io exceptions
    cin.exceptions(ios::failbit | ios::badbit);
    int integer;
    cin >> integer;
    cout << integer << endl;

    return 0;
}