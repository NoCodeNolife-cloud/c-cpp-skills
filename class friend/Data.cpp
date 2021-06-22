//
// Created by 云非雪墨非白 on 2021/6/19.
//

#include "Data.h"

Data::Data(int _value, int _proper) : value(_value), proper(_proper) {}

Data::Data() : value(0), proper(0) {}

ostream &function(ostream &_os, Data _data) {
    _os << _data.value;/*Access private members*/
    return _os;
}

int Data::getProper() const {
    return proper;
}
