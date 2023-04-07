//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_TWODIMENSIONALSHAPE_H
#define SHAPE_TWODIMENSIONALSHAPE_H
#include "Shape.h"

class TwoDimensionalShape : public Shape{
public:
    TwoDimensionalShape() = default;

    virtual double getArea();
    void print() const override;
};


#endif //SHAPE_TWODIMENSIONALSHAPE_H
