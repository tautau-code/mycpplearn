//
// Created by levef on 07.04.2023.
//

#include "Square.h"
#include "iostream"
using namespace std;
void Square::print() const {
    cout << "square";
}

double Square::getArea() {
    return size * size;
}
///
/// \param position Позиция фигуры в массиве
/// \param size Размер стороны куба
/// \param embeddingSymbols Какими символами рисовать фигуру
void Square::draw(int position, char embeddingSymbols) const {

    // пройтись по столбцам
    for (int i = 0; i < size; i++)
    {
        // нарисовать строки
        for (int j = 0; j < size; j++)
        {
            cout << embeddingSymbols;
        }
        cout << "\n";
    }
    cout << endl;
}

void Square::setSize(const int &size) {
    this->size = size;
}

int Square::getSize() const {
    return size;
}

Square::Square(int size) : size(size){
    // пустое тело
}
