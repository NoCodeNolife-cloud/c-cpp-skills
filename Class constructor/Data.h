//
// Created by 云非雪墨非白 on 2021/6/19.
//

#ifndef CLASS_CONSTRUCTOR_DATA_H
#define CLASS_CONSTRUCTOR_DATA_H

using namespace std;

class Data {
private:
    int value;
public:
    /**
     * Default constructor
     */
    Data();

    /**
     * constructor
     * @param _value
     */
    Data(int _value);

    int getValue() const;
};


#endif //CLASS_CONSTRUCTOR_DATA_H
