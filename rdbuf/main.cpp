#include <iostream>
#include <fstream>

using namespace std;

void hexMultiplicationTable(streambuf *buffer, int num);

int main() {

//    row
    int num = 5;

    cout << "We print " << num << " lines hexadecimal" << endl;

//    call function
    hexMultiplicationTable(cout.rdbuf(), num);

    cout << "That was the output of " << num << " hexadecimal lines " << endl;

    return 0;
}

/**
 * hex multiplication table
 * @param buffer streambuf
 * @param num int
 */
void hexMultiplicationTable(streambuf *buffer, int num) {
    ostream hexout(buffer);

//    set hex and showbase
    hexout << hex << showbase;

//    row
    for (int i = 1; i <= num; ++i) {
//        column
        for (int j = 1; j <= 10; ++j) {
            hexout << i * j << ' ';
        }
        hexout << endl;
    }
}