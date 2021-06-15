//
// Created by 云非雪墨非白 on 2021/6/15.
//

#include "Fraction.h"

Fraction::Fraction(int x, int y) : x(x), y(y) {}

int Fraction::numerator() const {
    return x;
}

int Fraction::denominator() const {
    return y;
}
