//
// Created by levef on 10.04.2023.
//

#ifndef PACKAGE_TWODAYPACKAGE_H
#define PACKAGE_TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package {
public:
    TwoDayPackage(string &name, string &address, string &city, string &state,
                  int &senderZip, int &addresseeZip, double &weight, double &price,
                  double &margin);

    double calculateCost() const override;
private:
    double margin; // наценка за двухдневную доставку
};


#endif //PACKAGE_TWODAYPACKAGE_H
