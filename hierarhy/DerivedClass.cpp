//
// Created by levef on 31.03.2023.
//

#include "DerivedClass.h"
#include "iostream"

void DerivedClass::print() {
    std::cout << "This is message from derived class." << std::endl;
}
DerivedClass::DerivedClass() = default;
