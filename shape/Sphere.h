//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_SPHERE_H
#define SHAPE_SPHERE_H
#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape {
public:
    double getArea() override;
    double getVolume() override;
    void print() const override;
};


#endif //SHAPE_SPHERE_H
