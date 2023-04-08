//
// Created by levef on 08.04.2023.
//

#ifndef SHAPE_RECTANGLE_H
#define SHAPE_RECTANGLE_H
#include "TwoDimensionalShape.h"

class Rectangle : public TwoDimensionalShape {
public:
    ///
    /// \param sizeX Размер по горизонтали
    /// \param sizeY Размер по вертикали
    Rectangle(int sizeX = 7, int sizeY = 5);

    double getArea() override;
    void print() const override;

    void draw(int position, char embeddingSymbols = '*') const override; // положение, размер, форму и заполняющие символы
private:
    int sizeX, sizeY;
};


#endif //SHAPE_RECTANGLE_H
