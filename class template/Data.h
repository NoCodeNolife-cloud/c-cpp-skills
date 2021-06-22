//
// Created by 云非雪墨非白 on 2021/6/21.
//

#ifndef CLASS_TEMPLATE_DATA_H
#define CLASS_TEMPLATE_DATA_H

#include <ostream>

/**
 * template class
 * @tparam T
 */
template<typename T>
class Data {
private:
    T value;

public:
    Data(T value) : value(value) {}

    virtual ~Data() {}

    friend std::ostream &operator<<(std::ostream &os, const Data &data) {
        os << "value: " << data.value;
        return os;
    }
};


#endif //CLASS_TEMPLATE_DATA_H
