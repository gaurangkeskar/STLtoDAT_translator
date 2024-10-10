#include "Reader.h"
#include <sstream>
Reader::Reader() {}
Reader::~Reader() {};

void Reader::read(string filename) {
    filename = "D:\\gaurangWorkspace\\STLtoDAT_translator\\cube.stl";
    ifstream infile(filename);
    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                data += x + " " + y + " " + z + " ";
            }
        }
    }
    
    
    /*ifstream myFile(filename);
    string line;
    size_t getPos;
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            getPos = line.find("vertex");
            if (getPos != string::npos) {
                data += line.substr(getPos + 7);
                data += "\n";
            }
        }
        myFile.close();
    }
    else {
        cout << "Unable to Open file";
    }*/
}



