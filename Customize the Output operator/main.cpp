#include <iostream>
#include <sstream>
#include <iomanip>
#include "Fraction.h"

using namespace std;

/**
 * customize the output operator
 * @tparam charT template
 * @tparam traits template
 * @param strm basic_ostream
 * @param f class Fraciton
 * @return basic_ostream
 */
template<class charT, class traits>
inline basic_ostream<charT, traits> &operator<<(basic_ostream<charT, traits> &strm, const Fraction &f) {

    /*
     * string stream
     * - with same format
     * - without special field width
     */
    basic_ostringstream<charT, traits> s;
    s.copyfmt(strm);
    s.width(0);

//    fill string stream
    s << f.numberator() << '/' << f.denominator();

//    print string stream
    strm << s.str();

    return strm;
}

int main() {

    Fraction vat(16, 100);

    /*
     * use customized output opeartor
     * - with same format
     * - without special field width
     */
    cout << "VAT: \"" << left << setw(8) << vat << '"' << endl;
    return 0;
}
