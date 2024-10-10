#include "Writer.h"
#include <iostream>
Write::Write() {}
Write::~Write() {}

void Write::write(vector<Triangle> triangles, string fileName, vector<double> uniqueValues)
{
	ofstream out(fileName);
	for (const auto& triangle : triangles) {
		out << fixed << setprecision(6)
			<< uniqueValues[triangle.p1.x] << " " << uniqueValues[triangle.p1.y] << " " << uniqueValues[triangle.p1.z] << "\n"
			<< uniqueValues[triangle.p2.x] << " " << uniqueValues[triangle.p2.y] << " " << uniqueValues[triangle.p2.z] << "\n"
			<< uniqueValues[triangle.p3.x] << " " << uniqueValues[triangle.p3.y] << " " << uniqueValues[triangle.p3.z] << "\n"
			<< uniqueValues[triangle.p1.x] << " " << uniqueValues[triangle.p1.y] << " " << uniqueValues[triangle.p1.z] << "\n" << endl << endl;
	}
}

