//
// Created by 云非雪墨非白 on 2021/6/14.
//

#include "Fraction.h"


Fraction::Fraction(int x, int y) : x(x), y(y) {}

Fraction::Fraction() {
    x = y = 0;
}

string Fraction::toString() const {
    return "[" + to_string(x) + "," + to_string(y) + "]";
}
