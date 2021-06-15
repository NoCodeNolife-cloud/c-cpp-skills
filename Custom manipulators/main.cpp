#include <bits/stdc++.h>

using namespace std;

/*
 * io ignore
 */
template<class CharT, class traits>
inline basic_istream<CharT, traits> &ignoreLine(basic_istream<CharT, traits> &strm) {
    /*
     * skip until end-of-line
     */
    strm.ignore(numeric_limits<int>::max(), strm.widen('\n'));

    /*
     * return stream for concatenation
     */
    return strm;
}

int main() {

    string str;
    cin >> ignoreLine >> str;
    cout << str << endl;
    return 0;
}
