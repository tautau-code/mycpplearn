#include <iostream>

#include "BaseClass.h"
#include "DerivedClass.h"



int main() {
    // create base class pointer
    BaseClass* baseClass;

    // create derived class obj
    DerivedClass derivedClass;

    // attach derived class obj to base class pointer
    baseClass = &derivedClass;

    // executes print fun associated with baseClass ptr type
    baseClass->print();

    return 0;
}
