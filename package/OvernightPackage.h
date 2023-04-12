//
// Created by levef on 10.04.2023.
//

#ifndef PACKAGE_OVERNIGHTPACKAGE_H
#define PACKAGE_OVERNIGHTPACKAGE_H
#include "Package.h"

class OvernightPackage : public Package {
public:
    OvernightPackage(string name, string address, string city, string state,
    int senderZip, int addresseeZip, double weight, double price,
    double marginPerWeight);

    double calculateCost() const override;
private:
    double marginPerWeight; // наценка за унцию при доставке на следующий день
};


#endif //PACKAGE_OVERNIGHTPACKAGE_H
