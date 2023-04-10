//
// Created by levef on 10.04.2023.
//

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string &name, string &address, string &city, string &state, int &senderZip,
                                   int &addresseeZip, double &weight, double &price, double &marginPerWeight)
                                   : Package(name, address, city, state,
                                             senderZip, addresseeZip, weight, price) {
    if(marginPerWeight>=0) this->marginPerWeight = marginPerWeight;
}

double OvernightPackage::calculateCost() const {
    return Package::calculateCost() + (getWeight() * marginPerWeight);
}
