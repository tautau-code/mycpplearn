//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_TETRAHEDRON_H
#define SHAPE_TETRAHEDRON_H
#include "ThreeDimensionalShape.h"

class Tetrahedron : public ThreeDimensionalShape {
public:
    Tetrahedron() = default;

    double getArea() override;
    double getVolume() override;
    void print() const override;
};


#endif //SHAPE_TETRAHEDRON_H
