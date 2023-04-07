//
// Created by levef on 05.04.2023.
//

#ifndef VIRTUAL_EMPLOYEE_H
#define VIRTUAL_EMPLOYEE_H
#include "string"
#include "iostream"
#include "Date.h"
using namespace std;

class Employee {
public:
    Employee(const string & firstName, const string & lastName, const string & SSN, Date);

    void setFirstName(const string & first); // установить имя
    string getFirstName() const; // возвратить имя

    void setLastName(const string & last);  // установить фамилию
    string  getLastName() const; // возвратить фамилию

    void setSocialSecurityNumber(const string & SSN); // установить SSN
    string getSocialSecurityNumber() const; // возвратить SSN

    virtual double earnings() const = 0; // чисто виртуальная
    virtual void print() const; // виртуальная

    Date getBirthDate() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    Date birthDate;
};


#endif //VIRTUAL_EMPLOYEE_H
