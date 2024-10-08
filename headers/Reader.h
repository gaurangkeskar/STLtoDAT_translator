#pragma once
#include <fstream>
#include <istream>
#include <string>
#include <iostream>

using namespace std;

class Reader {
public:
	string data;
	Reader();
	~Reader();

	void read(string f);
};
