//
// Created by levef on 05.04.2023.
//

#ifndef VIRTUAL_SALARIEDEMPLOYEE_H
#define VIRTUAL_SALARIEDEMPLOYEE_H
#include "Employee.h"

class SalariedEmployee : public Employee {
public:
    SalariedEmployee(const string & firstName, const string & lastName, const string & SSN, const double & weeklySalary, Date bd);

    void setWeeklySalary(double); // установить недельную зарплату
    double getWeeklySalary() const; // возвратить недельную зарплату

    virtual double earnings() const; // вычислить заработок
    void print() const override; // напечатать объект SalaryEmployee
private:
    double weeklySalary;
};


#endif //VIRTUAL_SALARIEDEMPLOYEE_H
