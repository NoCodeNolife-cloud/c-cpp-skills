//
// Created by 云非雪墨非白 on 2021/6/14.
//

#ifndef CUSTOMIZE_THE_OUTPUT_OPERATOR_FRACTION_H
#define CUSTOMIZE_THE_OUTPUT_OPERATOR_FRACTION_H


class Fraction {
private:
    int x;
    int y;

public:
    Fraction(int x, int y);

    int numberator()const;
    int denominator()const;
};


#endif //CUSTOMIZE_THE_OUTPUT_OPERATOR_FRACTION_H
