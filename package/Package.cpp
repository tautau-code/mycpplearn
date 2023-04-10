//
// Created by levef on 10.04.2023.
//

#include "Package.h"
#include "iostream"
using namespace std;

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

void Package::setName(string &name) {
    this->name = name;
}

string Package::getName() const {
    return name;
}

void Package::setAddress(string &addr) {
    this->address = addr;
}

string Package::getAddress() const {
    return address;
}

void Package::setCity(string &city) {
    this->city = city;
}

string Package::getCity() const {
    return city;
}

void Package::setSenderZip(int &zip) {
    this->senderZip = zip;
}

int Package::getSenderZip() const {
    return senderZip;
}

void Package::setAddresseeZip(int &zip) {
    this->addresseeZip = zip;
}

int Package::getAddresseeZip() const {
    return addresseeZip;
}

void Package::setWeight(double &w) {
    this->weight = w;
}

void Package::setPrice(double &new_price) {
    this->price = new_price;
}

double Package::getPrice() const {
    return price;
}

void Package::print() const {
    cout << "Package: " << getName() << "\n"
    << "\tTO: " << getAddresseeZip() << ", \n\t"
    << getCity() << ", \n\t"
    << getState() << ", \n\t"
    << getAddress()
    << "\n\n\tFROM: " << getSenderZip()
    << "\n\n Weight: " << getWeight()
    << " Price " << getPrice()
    << "\nCost: " << calculateCost()
    << endl;
}

void Package::setState(string s) {
    this->state = s;
}

string Package::getState() const {
    return state;
}
