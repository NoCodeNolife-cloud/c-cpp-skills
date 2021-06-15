//
// Created by 云非雪墨非白 on 2021/6/15.
//

#ifndef USER_DEFINED_FORMAT_FLAGS_FRACTION_H
#define USER_DEFINED_FORMAT_FLAGS_FRACTION_H


class Fraction {
private:
    int x;
    int y;

public:
//    Constructor
    Fraction(int x, int y);

    int numerator() const;

    int denominator() const;
};


#endif //USER_DEFINED_FORMAT_FLAGS_FRACTION_H
