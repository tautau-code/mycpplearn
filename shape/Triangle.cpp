//
// Created by levef on 07.04.2023.
//

#include "Triangle.h"
#include "iostream"
using namespace std;
void Triangle::print() const {
    cout << "triangle";
}

double Triangle::getArea() {
    return (double)(height * width)/2;
}

Triangle::Triangle(int height, int width) : height(height), width(width){
    // пустое тело
}

void Triangle::draw(int position, char embeddingSymbols) const {
    cout.width(width);
    for (int i = 0; i < height; i++)
    {
        cout << embeddingSymbols;
    }
    //todo: сбросить streamsize или вернуть настройки cout по умолчанию
    cout << endl;
}
