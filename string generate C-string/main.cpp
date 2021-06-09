#include <iostream>
#include <string>

using namespace  std;

int main() {

    string String="this is string";
    const string constString=String.c_str();

    cout << constString<<endl;

    return 0;
}
