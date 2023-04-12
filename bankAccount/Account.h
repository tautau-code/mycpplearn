//
// Created by levef on 12.04.2023.
//

#ifndef BANKACCOUNT_ACCOUNT_H
#define BANKACCOUNT_ACCOUNT_H


class Account {
public:
    ///
    /// \param start_balance - начальная сумма баланса
    Account(double& start_balance = 0);
    Account() = default;

    void credit(const double& c);
    void debit(const double& d);

    double getBalance() const;

private:
    double balance;
};


#endif //BANKACCOUNT_ACCOUNT_H
