#include "point.h"

Point::Point(
	double parax,
	double paray) {
	x = parax;
	y = paray;
	return;
}

Point Point::operator=(
	Point& parapoint) {
	x = parapoint.x;
	y = parapoint.y;
	return *this;
}

Point::~Point() {
	return;
}