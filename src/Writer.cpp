#include "Writer.h"
#include <iostream>
Write::Write() {}
Write::~Write() {}

void Write::write(vector<Triangle> triangles, string fileName, vector<double> uniqueValues)
{
	ofstream out(fileName);
	for (Triangle triangle : triangles) {
		out << fixed << setprecision(6)
			<< uniqueValues[triangle.getp1().getX()] << " " << uniqueValues[triangle.getp1().getY()] << " " << uniqueValues[triangle.getp1().getZ()] << "\n"
			<< uniqueValues[triangle.getp2().getX()] << " " << uniqueValues[triangle.getp2().getY()] << " " << uniqueValues[triangle.getp2().getZ()] << "\n"
			<< uniqueValues[triangle.getp3().getX()] << " " << uniqueValues[triangle.getp3().getY()] << " " << uniqueValues[triangle.getp3().getZ()] << "\n"
			<< uniqueValues[triangle.getp1().getX()] << " " << uniqueValues[triangle.getp1().getY()] << " " << uniqueValues[triangle.getp1().getZ()] << "\n" << endl << endl;
	}
}

