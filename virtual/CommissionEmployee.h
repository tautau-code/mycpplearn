//
// Created by levef on 31.03.2023.
//

#ifndef VIRTUAL_COMMISSIONEMPLOYEE_H
#define VIRTUAL_COMMISSIONEMPLOYEE_H
#include "string"
#include "Employee.h"
#include "Date.h"

using namespace std;

class CommissionEmployee : public Employee {
public:
    CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, Date bd = Date(1, 1, 1900));

    void setCommissionRate(double); // установить процент
    double getCommissionRate() const; // возвратить процент

    void setGrossSales(double); // установить объем продаж
    double getGrossSales() const; // возвратить объем продаж


    // ключевое слово virtual указывает на замену реализации
    double earnings() const override; // вычислить заработок
    void print() const override; // напечатать объект

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales{};
    double commissionRate{};
};


#endif //VIRTUAL_COMMISSIONEMPLOYEE_H
