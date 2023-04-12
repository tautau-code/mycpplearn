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

    void setName(string& name);
    string getName() const;

    void setAddress(string& addr);
    string getAddress() const;

    void setCity(string& city);
    string getCity() const;

    void setState(string s);
    string getState() const;

    void setSenderZip(int& zip);
    int getSenderZip() const;

    void setAddresseeZip(int& zip);
    int getAddresseeZip() const;

    void setWeight(double& w);
    double getWeight() const;

    void setPrice(double& new_price); // установить цену за унцию
    double getPrice() const;

    virtual double calculateCost() const;

    virtual void print() const;

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
