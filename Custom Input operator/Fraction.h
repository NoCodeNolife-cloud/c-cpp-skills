//
// Created by 云非雪墨非白 on 2021/6/14.
//

#ifndef CUSTOM_INPUT_OPERATOR_FRACTION_H
#define CUSTOM_INPUT_OPERATOR_FRACTION_H

#include <string>

using namespace std;

class Fraction {
private:
    int x;
    int y;

public:
    Fraction(int x, int y);
    Fraction();
    string toString()const;
};


#endif //CUSTOM_INPUT_OPERATOR_FRACTION_H
