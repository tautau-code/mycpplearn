//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_CIRCLE_H
#define SHAPE_CIRCLE_H

#include "TwoDimensionalShape.h"
#include "Shape.h"


class Circle : public TwoDimensionalShape {
public:
    Circle(const double radius);

    double getArea() override;
    void print() const override;
private:
    double radius;
};


#endif //SHAPE_CIRCLE_H
