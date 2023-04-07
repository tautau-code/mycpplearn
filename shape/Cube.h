//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_CUBE_H
#define SHAPE_CUBE_H
#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape {
public:
    Cube() = default;

    double getArea() override;
    double getVolume() override;
    void print() const override;
};


#endif //SHAPE_CUBE_H
