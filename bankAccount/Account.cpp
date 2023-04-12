//
// Created by levef on 12.04.2023.
//

#include "Account.h"
#include "iostream"

Account::Account(double &start_balance) {
    if(start_balance >= 0)
        balance = start_balance;
    else
    {
        std::cout << "Start balance should be > 0." << std::endl;
        balance = 0.0;
    }
}

double Account::getBalance() const {
    return balance;
}

void Account::credit(const double &c) {
    balance += c;
}

void Account::debit(const double &d) {
    if(d <= balance)
        balance -= d;
    else
        std::cout << "debit amount exceeds account balance" << std::endl;
}
