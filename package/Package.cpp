//
// Created by levef on 10.04.2023.
//

#include "Package.h"

Package::Package(string& name, string& address, string& city, string& state,
                 int& senderZip, int& addresseeZip, double& weight, double& price)
                 : name(name), address(address), city(city), state(state),
                 senderZip(senderZip), addresseeZip(addresseeZip) {
    if (weight>=0) this->weight = weight;
    if (price>=0) this->price = price;
}

double Package::calculateCost() const {
    return weight * price;
}

double Package::getWeight() const {
    return weight;
}
