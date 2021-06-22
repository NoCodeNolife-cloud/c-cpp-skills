//
// Created by 云非雪墨非白 on 2021/6/19.
//

#include "FriendClass.h"


ostream &FriendClass::printPrivate(ostream &_os, Data _data) {
    _os << _data.proper;
    return _os;
}
