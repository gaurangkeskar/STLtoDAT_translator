#include "Point.h"
#include <iostream>
using namespace std;

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

int Point::getZ()
{
	return z;
}


Point::Point(int xi, int yi, int zi) :x(xi), y(yi), z(zi) {};
Point::~Point() {};
