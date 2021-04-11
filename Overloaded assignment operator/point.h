#pragma once

class Point {
public:
	double x;
	double y;
	/**
	 * @brief constructor function
	*/
	Point(double parax = 0, double paray = 0);
	/**
	 * @brief assignment operator
	 * @param parapoint Point
	 * @return Point
	*/
	Point operator=(Point& parapoint);
	~Point();
};
