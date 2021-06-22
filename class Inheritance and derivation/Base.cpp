//
// Created by 云非雪墨非白 on 2021/6/20.
//

#include "Base.h"

Base::Base() : privatevalue(0), protectedvalue(0) {}

Base::Base(int privatevalue, int protectedvalue) : privatevalue(privatevalue),
                                                   protectedvalue(protectedvalue) {}

int Base::getPrivatevalue() const {
    return privatevalue;
}

void Base::setPrivatevalue(int privatevalue) {
    Base::privatevalue = privatevalue;
}

int Base::getProtectedvalue() const {
    return protectedvalue;
}

void Base::setProtectedvalue(int protectedvalue) {
    Base::protectedvalue = protectedvalue;
}
