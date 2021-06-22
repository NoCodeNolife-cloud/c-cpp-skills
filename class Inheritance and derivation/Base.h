//
// Created by 云非雪墨非白 on 2021/6/20.
//

#ifndef CLASS_INHERITANCE_AND_DERIVATION_BASE_H
#define CLASS_INHERITANCE_AND_DERIVATION_BASE_H

using namespace std;

class Base {
private:
    int privatevalue;

protected:
    int protectedvalue;

public:
    Base();

    Base(int privatevalue, int protectedvalue);

    int getPrivatevalue() const;

    void setPrivatevalue(int privatevalue);

    int getProtectedvalue() const;

    void setProtectedvalue(int protectedvalue);
};

#endif //CLASS_INHERITANCE_AND_DERIVATION_BASE_H
