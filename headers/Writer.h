#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "Triangle.h"
#include <iomanip>

using namespace std;

class Write {
public:
	Write();
	~Write();
	void write(vector<Triangle> triangle, string fileName, vector<double> uniqueValues);
};

