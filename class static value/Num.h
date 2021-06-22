//
// Created by 云非雪墨非白 on 2021/6/19.
//

#ifndef CLASS_STATIC_VALUE_NUM_H
#define CLASS_STATIC_VALUE_NUM_H


class Num {
private:
    static int times;/*static value*/

public:
    /**
     * default constructor
     */
    Num();

    /**
     * static function
     * @return
     */
    static int getTimes();

    /**
     * static function
     * @param times
     */
    static void setTimes(int times);
};

#endif //CLASS_STATIC_VALUE_NUM_H
