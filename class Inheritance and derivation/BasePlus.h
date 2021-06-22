//
// Created by 云非雪墨非白 on 2021/6/20.
//

#ifndef CLASS_INHERITANCE_AND_DERIVATION_BASEPLUS_H
#define CLASS_INHERITANCE_AND_DERIVATION_BASEPLUS_H


#include "Base.h"

class BasePlus : public Base {
private:
    int derivedprivatevalue;

protected:
    int derivedprotectedvalue;

public:
    BasePlus(int privatevalue, int protectedvalue, int derivedprivatevalue,
             int derivedprotectedvalue);

    int getDerivedprivatevalue() const;

    void setDerivedprivatevalue(int derivedprivatevalue);

    int getDerivedprotectedvalue() const;

    void setDerivedprotectedvalue(int derivedprotectedvalue);
};


#endif //CLASS_INHERITANCE_AND_DERIVATION_BASEPLUS_H
