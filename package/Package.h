//
// Created by levef on 10.04.2023.
//

#ifndef PACKAGE_PACKAGE_H
#define PACKAGE_PACKAGE_H
#include "string"
using namespace std;

class Package {
public:
    Package(string& name, string& address, string& city, string& state,
            int& senderZip, int& addresseeZip, double& weight, double& price);
    double getWeight() const;

    virtual double calculateCost() const;

private:
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    int senderZip; // ZIP отправителя
    int addresseeZip; // ZIP получателя
    double weight; // вес посылки в унциях
    double price; // цена посылки за унцию веса
};


#endif //PACKAGE_PACKAGE_H
