#include <iostream>
#include "Poligono.h"

using namespace std;

int Poligono::n=0;
Poligono::Poligono(const PointArray &pa):points(pa){
    ++numPoli;
}

Poligono::Poligono(const PointArray[], const int numPoints): points(pointArr, numPoints)
{
    ++numPoli;
}
