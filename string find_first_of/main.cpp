#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "123456789";

    // find_first_of
    string::size_type pos = str.find_first_of("4568",3);
    cout << pos << endl;

    // find_first_not_of
    string::size_type pos1=str.find_first_not_of("123");
    cout<<pos1<<endl;

    return 0;
}
