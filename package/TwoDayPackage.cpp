//
// Created by levef on 10.04.2023.
//

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string name, string address, string city, string state, int senderZip,
                             int addresseeZip, double weight, double price, double margin)
                             : Package(name, address, city, state, senderZip,
                                       addresseeZip, weight, price){
    if(margin>=0) this->margin = margin;
}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + this->margin;
}