//
// Created by levef on 12.04.2023.
//

#ifndef BANKACCOUNT_SAVINGSACCOUNT_H
#define BANKACCOUNT_SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(double& start_balance, double& rate);
    double calculateInsert() const;
private:
    double rate; // ставка по вкладу для этого счета
};


#endif //BANKACCOUNT_SAVINGSACCOUNT_H
