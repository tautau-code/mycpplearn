//
// Created by levef on 31.03.2023.
//

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last, const string & ssn,
                                                       double sales, double rate, double salary, Date bd)
                                                       : CommissionEmployee(first, last, ssn, sales, rate, bd) {
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const {
    cout << "base-salaried: ";
    CommissionEmployee::print();
    cout << "; base salary: " << getBaseSalary();
}
