#pragma once
#include "Triangle.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

class Triangulation {
public:
	vector<double> uniqueValues;
	unordered_map<double, int> map;
	Triangulation();
	~Triangulation();
	void createUniqueMap(const string& data);
	vector<Triangle> createTriangle(const string& data);
};
