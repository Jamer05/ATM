#include "Savings.h"
#include "iostream"


void Savings::setSavingsBalance(double deposit)
{
    s_balance = s_balance + deposit;
}


double Savings::getSavingsBalance() const
{
    return s_balance;
}

void Savings::setWithdraw()
{
    double wdraw = 0;
    cout << "Enter withdrawal amount: Php.";
    cin >> wdraw;

    if (s_balance >= wdraw)
    {
        s_balance = s_balance - wdraw;
        cout << "Your updated Checkings balance is: Php." << s_balance << endl;
    }
    else
    {
        cout << "Not able to withdraw Php." << wdraw << " from account." << endl;
        cout << "Not enough funds..." << endl;
    }
}

void Savings::setDeposit()
{
    double dep = 0;
    cout << "Enter deposit amount: Php.";
    cin >> dep;
    s_balance = s_balance + dep;
    cout << "Your updated Savings balance is: Php." << getSavingsBalance() << endl;
}

double Savings::getTransfer() // returns transfer ammount
{
    double wdraw = 0;
    cout << "Enter transfer amount: $";
    cin >> wdraw;

    if (s_balance >= wdraw)
    {
        s_balance = s_balance - wdraw;
        cout << "Your updated Savings balance is: Php." << s_balance << endl;
        return wdraw;
    }
    else
    {
        cout << "Not able to withdraw Php." << wdraw << " from account.";
        cout << "Not enough funds..." << endl;
        return 0.0;
    }
}
