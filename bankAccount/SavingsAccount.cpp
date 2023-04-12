//
// Created by levef on 12.04.2023.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double& start_balance, double &rate) : Account(start_balance){

}

double SavingsAccount::calculateInsert() const {
    return getBalance() * (rate * 0.01);
}
