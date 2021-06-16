#include <iostream>
#include <iterator>

using namespace std;

int main() {

//    ostreambuf_iterator<>
    ostreambuf_iterator<char> ostreambufIterator(cout);

//    string
    string hello("hello, world\n");

//    copy
    copy(hello.begin(), hello.end(), ostreambufIterator);
    cout << endl;

//    ostream_iterator<>
    ostream_iterator<char> ostreamIterator(cout);

//    copy
    copy(hello.begin(), hello.end(), ostreamIterator);
    cout << endl;

    return 0;
}
