//
// Created by 云非雪墨非白 on 2021/6/19.
//

#ifndef CLASS_THIS_POINTER_DATA_H
#define CLASS_THIS_POINTER_DATA_H


class Data {
private:
    int value;

public:
    /**
     * default constructor
     */
    Data();

    /**
     * constructer
     * @param value
     */
    Data(int value);

    /**
     * destructor
     */
    virtual ~Data();

    /**
     * get value
     * @return value
     */
    int getValue() const;
};


#endif //CLASS_THIS_POINTER_DATA_H
