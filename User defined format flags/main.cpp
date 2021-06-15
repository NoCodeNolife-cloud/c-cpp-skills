/*
 * 本例只对output操作符采取简易作法,因为本例的主要目的是揭示函数iword()的用法。这里的格式标志被视为一个布尔值,
 * 用来定义“分子和分母之间能否存在空格”。第一行内的函数ios-base::xal1oct()用于获取“可储存格式标志”的索引值,
 * 所得结果绝不应该被修改,所以我把它存在一个常量中。
 * fraction_spaces()是个操控器, 用来设置int值为true (该值储存于stream相关整数数组的索引iword_index处) .
 * output操作符会重新获得该值, 并根据其值输出分数。如果其值为false,
 * 采用缺省的“不支持空格”格式, 否则就在斜线两端加入空格。
 */
#include <iostream>
#include "Fraction.h"

using namespace std;

//get index for new ostream date
static const int iword_index = ios_base::xalloc();

//define manipulator that sets this data
ostream &fraction_spaces(ostream &strm) {
    strm.iword(iword_index) = true;
    return strm;
}

/**
 * output class Fraction
 * @param strm ostream
 * @param f Class Fraction
 * @return ostream&
 */
ostream &operator<<(ostream &strm,
        const Fraction &f) {
    /*
     * query the ostream data
     * true - use spaces between numerator and denominator
     * false - use no spaces between numerator and denominator
     */
    if (strm.iword(iword_index)) {
        strm << f.numerator() << " / " << f.denominator();
    } else {
        strm << f.numerator() << "/" << f.denominator();
    }
    return strm;
}

int main() {

//    create fraction class
    Fraction fraction(4, 5);

//    use no format flags
    cout << fraction << endl;

//    use defined format flags
    cout << fraction_spaces << fraction << endl;

    return 0;
}
