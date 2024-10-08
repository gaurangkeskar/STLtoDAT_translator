#include "Writer.h"
#include <iostream>
Write::Write() {}
Write::~Write() {}

void Write::write(vector<Triangle> triangles, string fileName)
{
	ofstream out(fileName);
	for (const auto& triangle : triangles) {
		out << fixed << setprecision(6)
			<< triangle.p1.x << " " << triangle.p1.y << " " << triangle.p1.z << "\n"
			<< triangle.p2.x << " " << triangle.p2.y << " " << triangle.p2.z << "\n"
			<< triangle.p3.x << " " << triangle.p3.y << " " << triangle.p3.z << "\n"
			<< triangle.p1.x << " " << triangle.p1.y << " " << triangle.p1.z << "\n" << endl << endl;
	}
}

