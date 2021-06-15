//
// Created by 云非雪墨非白 on 2021/6/14.
//

#include "Fraction.h"

int Fraction::numberator() const {
    return x;
}

int Fraction::denominator() const {
    return y;
}

Fraction::Fraction(int x, int y) : x(x), y(y) {}
