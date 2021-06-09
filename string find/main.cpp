#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 = "TARGAET";

    // front
    if (string1.find('A') != string::npos) {

        cout << "find " << string1.find('A') << endl;
    } else {

        cout << "not find" << endl;
    }

    // back
    if (string1.rfind('A') != string::npos) {

        cout << "find " << string1.rfind('A') << endl;
    } else {

        cout << "not find" << endl;
    }

    string string2="TA";
    if(string1.find(string2)!=string1.npos) {

        cout << "find" << endl;
    }else{

        cout<<"not find"<<endl;
    }

    return 0;
}
