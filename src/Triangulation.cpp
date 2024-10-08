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
			Point p1(uniqueValues[countPoints[0]], uniqueValues[countPoints[1]], uniqueValues[countPoints[2]]);
			Point p2(uniqueValues[countPoints[3]], uniqueValues[countPoints[4]], uniqueValues[countPoints[5]]);
			Point p3(uniqueValues[countPoints[6]], uniqueValues[countPoints[7]], uniqueValues[countPoints[8]]);
			Triangle t(p1, p2, p3);
			triangles.push_back(t);
			countPoints.clear();
		}
	}


	return triangles;
}

