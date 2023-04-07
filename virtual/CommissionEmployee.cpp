//
// Created by levef on 31.03.2023.
//

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string & first, const string & last, const string & ssn, double sales, double rate, Date bd) : Employee(first, last, ssn, bd) {
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

void CommissionEmployee::setGrossSales(double sales) {
    if (sales >= 0.0)
    {
        grossSales = sales;
    }
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

double CommissionEmployee::earnings() const {
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales()
    << "; commission rate: " << getCommissionRate();
}
