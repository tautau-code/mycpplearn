//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_TRIANGLE_H
#define SHAPE_TRIANGLE_H
#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
public:
    /// Прямоугольный треугольник
    /// \param height Высота треугольника
    /// \param width Ширина треугольника
    Triangle(int height, int width);

    double getArea() override;
    void print() const override;

    virtual void draw(int position, char embeddingSymbols = '*') const; // положение, размер, форму и заполняющие символы
private:
    int height, width;
};


#endif //SHAPE_TRIANGLE_H
