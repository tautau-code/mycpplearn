//
// Created by levef on 07.04.2023.
//

#include "Cube.h"
#include "iostream"
using namespace std;
void Cube::print() const {
    cout << "cube";
}

double Cube::getVolume() {
    return ThreeDimensionalShape::getVolume();
}

double Cube::getArea() {
    return 200;
}
