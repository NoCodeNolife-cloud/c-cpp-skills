#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1="TARGET";

    //  ostream
    cout<<string1<<endl;

    // istream
    cin>>string1;

    // test ostream and istream
    cout<<string1<<endl;

    //  getline
    getline(cin,string1);

    cout<<string1<<endl;

    return 0;
}
