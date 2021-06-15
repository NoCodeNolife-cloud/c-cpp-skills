#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    string str;
    cout << "input string:";
    cin >> str;
    cout << str << endl;

    // getline
    cin.get();
    getline(cin, str);
    cout << str << endl;

    // the state of the input
    while(cin>>str){
        // the state of the exit
        if(str=="exit"){
            break;
        }
        cout<<str<<endl;
    }

    return 0;
}
