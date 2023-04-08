//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_SQUARE_H
#define SHAPE_SQUARE_H
#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape {
public:
    Square(int size = 5);

    virtual void draw(int position, char embeddingSymbols = '*') const; // положение (от левого верхнего края), размер и заполняющие символы

    double getArea() override; // возвращает площадь квадрата
    void print() const override;

    void setSize(const int &size); //задать размер стороны квадрата
    int getSize() const; // венуть размер стороны квадрата

private:
    int size; // размер стороны
};


#endif //SHAPE_SQUARE_H
