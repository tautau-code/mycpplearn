//
// Created by levef on 12.04.2023.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double &start_balance, double &fee) : Account(start_balance), fee(fee) {

}

bool CheckingAccount::credit(double &c) {

    auto balance = getBalance();
    if(fee < balance) {
        Account::credit((c - fee));
        return true;
    }
    else { return false; }
}

bool CheckingAccount::debit(double &d) {
    auto balance = getBalance();
    if((balance + fee ) <= balance) {
        Account::credit((balance + fee));
        return true;
    }
    else { return false; }
}
