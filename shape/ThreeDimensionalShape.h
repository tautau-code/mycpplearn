//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_THREEDIMENSIONALSHAPE_H
#define SHAPE_THREEDIMENSIONALSHAPE_H
#include "Shape.h"

class ThreeDimensionalShape : public Shape {
public:
    ThreeDimensionalShape() = default;

    virtual double getVolume();
    void print() const override;
};


#endif //SHAPE_THREEDIMENSIONALSHAPE_H
