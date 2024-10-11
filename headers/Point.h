#pragma once
class Point {
private:
	int x, y, z;
	Point();
public:
	int getX();
	int getY();
	int getZ();

	Point(int xi = 0, int yi = 0, int zi = 0);
	~Point();
};

