#ifndef SAVINGS_H
#define SAVINGS_H
#pragma once
#include "Account.h"


class Savings : public Account
{
private:
    double s_balance = 5000;

public:
    void setSavingsBalance(double Balance);
    double getSavingsBalance() const;
    void setWithdraw();
    void setDeposit();
    double getTransfer();
};

#endif // SAVINGS_H
