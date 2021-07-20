//
// Created by Administrator on 2021/7/20.
//

#ifndef CLASS_TEMPLATE_INHERIT_BASE_H
#define CLASS_TEMPLATE_INHERIT_BASE_H

#include <ostream>

template<typename T>
class Base {
public:
    T x;

    Base(T x) : x(x) {}
};

#endif //CLASS_TEMPLATE_INHERIT_BASE_H
