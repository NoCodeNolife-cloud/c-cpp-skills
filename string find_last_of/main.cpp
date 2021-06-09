#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 = "TARGET";
    string basicString = "ARG";
    char basicChar[]="ARG";

    // string
    string::size_type pos = string1.find_last_of(basicString);
    (pos != string::npos ? cout << "find " << pos : cout << "not find") << endl;

    string::size_type pos1 = string1.find_last_not_of(basicString);
    (pos1 != string::npos ? cout << "find " << pos1 : cout << "not find") << endl;

    // char
    string::size_type pos2 = string1.find_last_of(basicChar);
    (pos2 != string::npos ? cout << "find " << pos2 : cout << "not find") << endl;

    string::size_type pos3 = string1.find_last_not_of(basicChar);
    (pos3 == string::npos ? cout << "not find" : cout << "find " << pos3) << endl;

    return 0;
}
