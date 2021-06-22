//
// Created by 云非雪墨非白 on 2021/6/20.
//

#ifndef CLASS_CONSTRUCTOR_AND_DESTRUCTOR_OF_DERIVED_CLASSES_PLUSBASE_H
#define CLASS_CONSTRUCTOR_AND_DESTRUCTOR_OF_DERIVED_CLASSES_PLUSBASE_H

#include <iostream>
#include "Base.h"

using namespace std;

class PlusBase :public Base{
public:
    PlusBase();

    virtual ~PlusBase();
};


#endif //CLASS_CONSTRUCTOR_AND_DESTRUCTOR_OF_DERIVED_CLASSES_PLUSBASE_H
