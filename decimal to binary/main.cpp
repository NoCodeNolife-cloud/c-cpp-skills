#include <iostream>
#include <bitset>
#include <fstream>
#include <cassert>

using namespace std;

int main() {

//    open file in out and in mode
    fstream file("out.dat", ios::out | ios::in);

//    check for file
    assert(file);

//    set file print point
    file.seekp(0, ios::end);


    for (int i = 1; i < 256; ++i) {

        bitset<8> os(i);

//        print os
        file << os.to_string() << endl;
    }

    return 0;
}
