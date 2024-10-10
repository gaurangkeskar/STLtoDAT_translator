#pragma once
class Point {
private:
	Point();
public:
	int x, y, z;

	Point(int xi = 0, int yi = 0, int zi = 0);
	~Point();
};

