//
// Created by 云非雪墨非白 on 2021/6/19.
//

#include "Num.h"

Num::Num() {
    ++times;
}

int Num::getTimes() {
    return times;
}

void Num::setTimes(int times) {
    Num::times = times;
}

int Num::times = 0;/*initial static value*/