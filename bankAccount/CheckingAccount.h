//
// Created by levef on 12.04.2023.
//

#ifndef BANKACCOUNT_CHECKINGACCOUNT_H
#define BANKACCOUNT_CHECKINGACCOUNT_H
#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double& start_balance, double& fee);

    bool credit(double& c);
    bool debit(double& d);
private:
    double fee; // плата, взимаемая за транзакцию
};


#endif //BANKACCOUNT_CHECKINGACCOUNT_H
