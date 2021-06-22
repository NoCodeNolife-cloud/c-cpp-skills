//
// Created by 云非雪墨非白 on 2021/6/20.
//

#ifndef CLASS_OVERLOADED_OPERATOR_POINT_H
#define CLASS_OVERLOADED_OPERATOR_POINT_H


#include <ostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y);

    virtual ~Point();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    // overloaded operator<<
    friend std::ostream &operator<<(std::ostream &os, const Point &point);

    // overloaded operator<
    bool operator<(Point) const;
};


#endif //CLASS_OVERLOADED_OPERATOR_POINT_H
