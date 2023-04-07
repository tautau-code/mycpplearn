//
// Created by levef on 07.04.2023.
//

#include "Circle.h"
#include "iostream"
using namespace  std;

Circle::Circle(const double radius) {
    this->radius = radius;
}

void Circle::print() const {
    cout << "circle";
}

double Circle::getArea() {
    return 2320;
}

