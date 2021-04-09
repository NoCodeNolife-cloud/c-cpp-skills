#pragma once

class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int _x, int _y);
	Point(const Point& _pt);
	Point& operator=(const Point& _pt);
	Point operator+(const Point& _pt);
	Point operator-(const Point& _pt);
	void show()const;
	int getx()const;
	void setx(int _x);
	int gety()const;
	void sety(int _y);
	~Point();
};