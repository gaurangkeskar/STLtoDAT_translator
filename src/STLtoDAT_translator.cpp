#include "Reader.h"
#include "Triangle.h"
#include "Triangulation.h"
#include "Writer.h"
#include <iostream>


int main()
{
    Reader r;
    r.read(" ");
    Triangulation triangulation;
    triangulation.createUniqueMap(r.data);

    std::vector<Triangle> triangles = triangulation.createTriangle(r.data);

    Write w;
    w.write(triangles, "D:\\gaurangWorkspace\\STLtoDAT_translator\\output.dat");

    std::cout << "Triangles successfully written to output.dat\n";

    return 0;

}

