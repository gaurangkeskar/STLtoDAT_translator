#include "Reader.h"

Reader::Reader() {}
Reader::~Reader() {};

void Reader::read(string filename) {
    filename = "D:\\gaurangWorkspace\\STLtoDAT_translator\\cube.stl";
    ifstream myFile(filename);
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
    }
}
