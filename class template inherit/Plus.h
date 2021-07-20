//
// Created by Administrator on 2021/7/20.
//

#ifndef CLASS_TEMPLATE_INHERIT_PLUS_H
#define CLASS_TEMPLATE_INHERIT_PLUS_H

#include <ostream>
#include "Base.h"

template<typename T>
class Plus {
public:
    Base<T> base;
    T y;

    Plus(T x, T y) : Base<T>(x), y(y) {}

};


#endif //CLASS_TEMPLATE_INHERIT_PLUS_H
