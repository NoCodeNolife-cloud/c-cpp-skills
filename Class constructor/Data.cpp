//
// Created by 云非雪墨非白 on 2021/6/19.
//

#include "Data.h"

Data::Data() {
    value = 0;
}

Data::Data(int _value) {
    value = _value;
}

int Data::getValue() const {
    return value;
}
