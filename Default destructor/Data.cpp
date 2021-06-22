//
// Created by 云非雪墨非白 on 2021/6/19.
//

#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(int _value) {
    value = &_value;
}

Data::~Data() {
    cout << "call the destructor\n";
    delete value;
}
