//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_TRIANGLE_H
#define SHAPE_TRIANGLE_H
#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
public:
    Triangle() = default;

    virtual double getArea();
    void print() const override;
};


#endif //SHAPE_TRIANGLE_H
