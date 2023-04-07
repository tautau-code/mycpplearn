//
// Created by levef on 07.04.2023.
//

#include "Sphere.h"
#include "iostream"
using namespace std;

void Sphere::print() const {
    cout << "sphere";
}

double Sphere::getVolume() {
    return ThreeDimensionalShape::getVolume();
}

double Sphere::getArea() {
    return 1238;
}
