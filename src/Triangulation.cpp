#include "Triangulation.h"
#include <iostream>

Triangulation::Triangulation() {}

Triangulation::~Triangulation() {}

void Triangulation::createUniqueMap(const string& data)
{
	istringstream ss(data);
	double value;
	int index = 0;

	while (ss >> value) {
		if (map.find(value) == map.end()) {
			map[value] = index;
			uniqueValues.push_back(value);
			index++;
		}
	}
}



vector<Triangle> Triangulation::createTriangle(const string& data)
{
	vector<Triangle> triangles;
	istringstream ss(data);
	vector<int> countPoints;
	double value;


	while (ss >> value) {

		countPoints.push_back(map[value]);

		if (countPoints.size() == 9) {
			Point p1(countPoints[0], countPoints[1],countPoints[2]);
			Point p2(countPoints[3], countPoints[4], countPoints[5]);
			Point p3(countPoints[6], countPoints[7], countPoints[8]);
			Triangle t(p1, p2, p3);
			triangles.push_back(t);
			countPoints.clear();
		}
	}


	return triangles;
}

