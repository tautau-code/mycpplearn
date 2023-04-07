//
// Created by levef on 05.04.2023.
//

#include "Employee.h"
#include "Date.h"
Employee::Employee(const string &firstName, const string &lastName, const string &SSN, Date bd)
: firstName(firstName), lastName(lastName), socialSecurityNumber(SSN), birthDate(bd) {

}

void Employee::setFirstName(const string &first) {
    this->firstName = first;
}

string Employee::getFirstName() const {
    return firstName;
}

void Employee::setLastName(const string &last) {
    this->lastName = last;
}

string Employee::getLastName() const {
    return lastName;
}

void Employee::setSocialSecurityNumber(const string &SSN) {
    this->socialSecurityNumber = SSN;
}

string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::print() const {
    cout << getFirstName() << ' ' << getLastName()
    << "\nsocial security number: " << getSocialSecurityNumber()
    << "\nbirthday: " << getBirthDate();
}

Date Employee::getBirthDate() const {
    return birthDate;
}
