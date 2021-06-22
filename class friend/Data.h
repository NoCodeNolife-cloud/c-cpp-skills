//
// Created by 云非雪墨非白 on 2021/6/19.
//

#ifndef CLASS_FRIEND_DATA_H
#define CLASS_FRIEND_DATA_H

#include <ostream>

using namespace std;

class Data {
private:

    int value;
protected:
    int proper;
public:
    Data();

    Data(int, int);

    int getProper() const;

    friend ostream &function(ostream &, Data);/*friend function*/
    friend class FriendClass;/*friend class*/
};

#endif //CLASS_FRIEND_DATA_H
