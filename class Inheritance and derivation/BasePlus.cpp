//
// Created by 云非雪墨非白 on 2021/6/20.
//

#include "BasePlus.h"

BasePlus::BasePlus(int privatevalue, int protectedvalue, int derivedprivatevalue,
                   int derivedprotectedvalue) : Base(privatevalue, protectedvalue),
                                                derivedprivatevalue(derivedprivatevalue),
                                                derivedprotectedvalue(

derivedprotectedvalue) {}
int BasePlus::getDerivedprivatevalue() const {
    return derivedprivatevalue;
}

void BasePlus::setDerivedprivatevalue(int derivedprivatevalue) {
    BasePlus::derivedprivatevalue = derivedprivatevalue;
}

int BasePlus::getDerivedprotectedvalue() const {
    return derivedprotectedvalue;
}

void BasePlus::setDerivedprotectedvalue(int derivedprotectedvalue) {
    BasePlus::derivedprotectedvalue = derivedprotectedvalue;
}
