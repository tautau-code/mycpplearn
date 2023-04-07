//
// Created by levef on 31.03.2023.
//

#ifndef VIRTUAL_BASEPLUSCOMMISSIONEMPLOYEE_H
#define VIRTUAL_BASEPLUSCOMMISSIONEMPLOYEE_H
#include "string"
using namespace std;

#include "CommissionEmployee.h"
#include "Date.h"

class BasePlusCommissionEmployee : public CommissionEmployee  {
public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0, Date bd = *new Date());

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double baseSalary;
};



#endif //VIRTUAL_BASEPLUSCOMMISSIONEMPLOYEE_H
