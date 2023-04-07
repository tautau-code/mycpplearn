//
// Created by levef on 05.04.2023.
//

#include "SalariedEmployee.h"
#include "Date.h"

SalariedEmployee::SalariedEmployee(const string &firstName, const string &lastName, const string &SSN,
                                   const double &weeklySalary, Date bd)
                                   : Employee(firstName, lastName, SSN, bd) {
    setWeeklySalary(weeklySalary);
}

void SalariedEmployee::setWeeklySalary(double  salary) {
    this->weeklySalary = salary;
}

double SalariedEmployee::getWeeklySalary() const {
    return weeklySalary;
}

double SalariedEmployee::earnings() const {
    return getWeeklySalary();
}

void SalariedEmployee::print() const {
    cout << "salaried employee: ";
    Employee::print();
    cout << "\nweekly salary: " << getWeeklySalary();
}
