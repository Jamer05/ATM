#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once
#include <string>
#include "Checkings.h"


class Account
{
private:
    string firstName, lastName;
    string accountName;
    int accNumber; //this accNumber may become redundant

    int accountNumber = 52637055;//for login
    int pinNumber = 8080;


public:
    void setAccountName(string firstname, string lastname);
    string getAccountName();
    void setAccountNumber(int accno);
    bool login();
};

#endif // ACCOUNT_H
