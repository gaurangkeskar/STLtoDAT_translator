#include "Triangle.h"

Point Triangle::getp1()
{
    return p1;
}

Point Triangle::getp2()
{
    return p2;
}

Point Triangle::getp3()
{
    return p3;
}

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
Triangle::~Triangle() {}

