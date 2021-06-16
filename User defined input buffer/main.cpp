#include <iostream>
#include "inbuf.h"

using namespace std;

int main() {
//    create special stream buffer
    inbuf ib;

//    initialize input stream with that buffer
    istream in(&ib);
    char c;
    for (int i = 1; i <= 20; ++i) {

//        read next character (out of the buffer)
        in.get(c);

//        print that character (and flush)
        cout << c << flush;

//        after eight characters, put two characters back into the stream
        if (i == 0) {
            in.unget();
            in.unget();
        }
    }
    cout << endl;
    return 0;
}
