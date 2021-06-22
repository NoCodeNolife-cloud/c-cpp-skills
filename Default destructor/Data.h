//
// Created by 云非雪墨非白 on 2021/6/19.
//

#ifndef DEFAULT_DESTRUCTOR_DATA_H
#define DEFAULT_DESTRUCTOR_DATA_H

class Data {
private:
    int *value;

public:
    /**
     * constructor
     * @param _value
     * @param _vector
     */
    Data(int _value);

    /**
     * destructor
     */
    virtual ~Data();
};


#endif //DEFAULT_DESTRUCTOR_DATA_H
