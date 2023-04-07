//
// Created by levef on 07.04.2023.
//

#include "Tetrahedron.h"
#include "iostream"
using namespace std;

void Tetrahedron::print() const {
    cout << "tetrahedron";
}

double Tetrahedron::getVolume() {
    return ThreeDimensionalShape::getVolume();
}

double Tetrahedron::getArea() {
    return 8834;
}
