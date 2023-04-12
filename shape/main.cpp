#include <iostream>
#include "Shape.h"
#include "vector"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"
#include "typeinfo"

using namespace std;

void viaPointer(const Shape* baseClassPtr);

int main() {
    // создаем вектор из 6 указателей на Shape производные классы
    vector<Shape*> shapes(6);

    // создаем объекты конкретных классов
    Circle circle(20.0);
    Square square;
    Triangle triangle;

    Sphere sphere;
    Cube cube;
    Tetrahedron tetrahedron;

    shapes[0] = &circle;
    shapes[1] = &square;
    shapes[2] = &triangle;
    shapes[3] = &sphere;
    shapes[4] = &cube;
    shapes[5] = &tetrahedron;

    for (auto & shape : shapes)
    {
        // нисходящее приведение указателя
        auto* derivedPtr = dynamic_cast<TwoDimensionalShape*>(shape);
        if (derivedPtr != nullptr) // 0 если не TwoDimensionalShape
            cout << "Area of " << typeid(*derivedPtr).name() << " " << derivedPtr->getArea() << endl << endl;

        auto* derivedPtr2 = dynamic_cast<ThreeDimensionalShape*>(shape);
        if (derivedPtr2 != nullptr)
        {
            cout << "Area of " << typeid(*derivedPtr2).name() << " " << derivedPtr2->getArea() << endl;
            cout << "Volume of " << typeid(*derivedPtr2).name() << " " << derivedPtr2->getVolume() << endl;
            cout << endl;
        }
    }

    system("pause");
    return 0;
}
