//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H
#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape {
public:
    Square() = default;

    double getArea() override;
    void print() const override;
};


#endif //SHAPE_SQUARE_H
