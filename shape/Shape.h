//
// Created by levef on 07.04.2023.
//

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H
//#include "Circle.h"
//#include "Square.h"
//#include "Triangle.h"
//#include "Sphere.h"
//#include "Cube.h"
//#include "Tetrahedron.h"

class Shape {
public:
    Shape() = default;

    virtual void draw(int position, char embeddingSymbols = '*') const; // положение, размер, форму и заполняющие символы
    virtual double getArea() = 0;
    virtual void print() const;
};


#endif //SHAPE_SHAPE_H
