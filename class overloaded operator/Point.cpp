//
// Created by 云非雪墨非白 on 2021/6/20.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

Point::~Point() {

}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y;
    return os;
}

bool Point::operator<(Point _point) const {
    if ((x < _point.x) or (x == _point.x and y < _point.y)) {
        return true;
    } else {
        return false;
    }
}
