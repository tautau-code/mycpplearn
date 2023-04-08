//
// Created by levef on 08.04.2023.
//

#include "Rectangle.h"
#include "iostream"
using namespace std;
Rectangle::Rectangle(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY){
    // пустое тело
}

double Rectangle::getArea() {
    return sizeX * sizeY;
}

void Rectangle::print() const {
    cout << "rectangle";
}

void Rectangle::draw(int position, char embeddingSymbols) const {
    for (int i = 0; i < sizeY; i++)
    {
        for (int j = 0; j < sizeX; j++)
        {
            cout << embeddingSymbols;
        }
        cout << "\n";
    }
    cout << endl;
}
