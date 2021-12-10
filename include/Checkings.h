#ifndef CHECKINGS_H
#define CHECKINGS_H
#pragma once

using namespace std;
class Checkings
{
private:
    double c_balance = 5000;

public:
    void setBalance(double deposit);
    double getBalance() const;
    void setWithdraw();
    void setDeposit();
    double getTransfer();
};

#endif // CHECKINGS_H
