#include "Account.h"
#include <string>
#include <iostream>
#include<stdio.h>
using namespace std; ;

void  Account::setAccountName(string firstname, string lastname)
{
    firstName = firstname;
    lastName = lastname;
}

string Account::getAccountName()
{
    accountName = firstName + " " + lastName;
    return(accountName);
}

void Account::setAccountNumber(int accno)
{
    accNumber = accno;
}

bool Account::login() //logging     verification with predefined credentials
{
    int givenAccountNumber = -1;
    int givenPinNumber = -1;
    bool isAccountInvalid = true;
    bool isPinInvalid = true;

    cout << "\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t|          Welcome!         |" << endl;
    cout << "\t\t\t\t\t-----------------------------" << endl;
    while (isAccountInvalid)
    {

        cout << "\t\t\t\t\tPlease enter your account number: ";
        cin >> givenAccountNumber;

        if (givenAccountNumber == accountNumber)
        {
            isAccountInvalid = false;
        }
        else
        {
            cout << "\t\t\t\t\tInvalid account number! Try again." << endl;
        }
    }

    while (isPinInvalid)
    {

        cout << "\t\t\t\t\tsEnter your PIN: ";
        cin >> givenPinNumber;

        if (givenPinNumber == pinNumber)
        {
            isPinInvalid = false;
        }
        else
        {
            cout << "\t\t\t\t\tInvalid PIN number! Try again." << endl;
        }
    }

    return true;

}
