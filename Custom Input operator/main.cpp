#include <iostream>
#include "Fraction.h"

using namespace std;

/**
 * cunstom input operator
 * @tparam charT template
 * @tparam traits template
 * @param strm basic_istream
 * @param f class Fraction
 * @return basic_istream
 */
template<class charT, class traits>
inline basic_istream<charT, traits> &operator>>(basic_istream<charT, traits> &strm, Fraction &f) {
    int n, d;
    strm >> n;

    /*
     * if available
     * - read '/' and value of demonimator
     */
    if (strm.peek() == ',') {
//        ignore symbol
        strm.ignore();
//        input
        strm >> d;
    } else {
        d = 1;
    }

    /*
     * if denominator is zero
     * - set failbit as I/O format error
     */
    if (d == 0) {
        strm.setstate(ios::failbit);
        return strm;
    }

    /*
     * if everything is fine so far
     * change the value of the fraction
     */
    if (strm) {
        f = Fraction(n, d);
    }
    return strm;
}

int main() {

    Fraction fraction;
    cin >> fraction;
    cout << fraction.toString() << endl;
    return 0;
}
