#pragma once
#include "Point.h"
#include <iostream>
#include <iomanip>

using namespace std;
class Triangle {
public:
	Point p1, p2, p3;
	Triangle(Point p1, Point p2, Point p3);
	~Triangle();

};

