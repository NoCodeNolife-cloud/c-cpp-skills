#include <iostream>
#include "outbuf.h"
#include "basic_outbuf.h"
#include "fdoutbuf.h"

using namespace std;

int main() {

//    test for basic_outbuf
    outbuf outbuf1;
    ostream out(&outbuf1);

    out << "31 hexadecimal: " << hex << 31 << endl;

//    test for fdoutbuf
    fdostream fdostream1(1);
    fdostream1 << "31 hexadecimal: " << hex << 31 << endl;

    return 0;
}
