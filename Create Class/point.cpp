#include "head.h"

using namespace std;

Point::Point()
{
	srand(time(0));
	this->x = rand() % 100;
	this->y = rand() % 100;
	return;
}

Point::Point(int _x, int _y) :x(_x), y(_y)
{
	return;
}

Point::Point(const Point& _pt)
{
	this->x = _pt.x;
	this->y = _pt.y;
	return;
}

Point& Point::operator=(const Point& _pt)
{
	this->x = _pt.x;
	this->y = _pt.y;
	return *this;
}

Point Point::operator+(const Point& _pt)
{
	Point res(_pt.x + this->x, _pt.y + this->y);
	return res;
}

Point Point::operator-(const Point& _pt)
{
	Point res(this->x - _pt.x, this->y - _pt.y);
	return res;
}

void Point::show() const
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
	return;
}

int Point::getx() const
{
	return this->x;
}

void Point::setx(int _x)
{
	this->x = _x;
	return;
}

int Point::gety() const
{
	return this->y;
}

void Point::sety(int _y)
{
	this->y = _y;
	return;
}

Point::~Point()
{
	return;
}