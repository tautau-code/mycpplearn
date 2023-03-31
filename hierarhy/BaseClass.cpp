//
// Created by levef on 31.03.2023.
//
#include "iostream"
#include "BaseClass.h"

void BaseClass::print() {
    std::cout << "This is message from base class." << std::endl;
}

BaseClass::BaseClass() = default;
