#include <iostream>
#include "Loading.h"
#include "Checkings.h"
#include "Savings.h"
#include "Account.h"
using namespace std;

static int mainmMenu()
{
    Loading ld;
    int ch= 0;
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t----------------------------------------------------\n";
    cout << "\t\t\t\t                ATM-CLI(ver 1.0.1)                   ";
    cout << "\n\t\t\t\t----------------------------------------------------";
    cout << "\n\n\n";
    ld.sleep(2.0);
    cout << "\t\t\t\t[1] " << "Deposit\n";
    ld.sleep(1.5);
    cout << "\t\t\t\t[2] " << "Withdraw\n";
    ld.sleep(1.0);
    cout << "\t\t\t\t[3] " << "Check Balance\n";
    ld.sleep(0.5);
    cout << "\t\t\t\t[4] " << "Transfer Money\n";
    ld.sleep(0.0);
    cout << "\t\t\t\t[5] " << "Exit\n";
    cout << "\t\t\t\t----------------------------------------------------\n";
    cout << "\t\t\t\t                                                      ";
    cout << "\n\t\t\t\t----------------------------------------------------";
    cout << "\n\n\n";
    cout << "What would you like to do? \'type any number\' -> : ";
    cin >> ch;
    return ch;
}
int main()
{
    int accountChoice = -1;
    Loading ld1;
    ld1.loadingMachine();
    Account accObj;
    Checkings checkObj;
    Savings savObj;
    bool isNotFinished = true;
    if(accObj.login() == true)
    {
        accObj.setAccountName("Hemerson", "Ramiro"); // Or whatever predefined name
        string fullName = accObj.getAccountName();
        printf("\e[1;1H\e[2J");
        cout << "\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t|    Welcome, " << fullName << "s|" << endl;
        cout << "\t\t\t\t\t-----------------------------" << endl;
    }
    do
    {
        switch(mainmMenu())
        {
        case 1:
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| Which account would you like to deposit into? |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| 1. Checking                                   |" << endl;
            cout << "\t\t\t\t| 2. Savings                                    |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;

            cin >> accountChoice;
            switch (accountChoice)   //nested switch case to chose account type
            {
            case 1:
                checkObj.setDeposit();
                break;
            case 2:
                savObj.setDeposit();
                break;
            default:
                cout << "Invalid choice! Please select again." << endl;
                break;
            }


            break;
        case 2:
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t|       Which account to widthdrwaw from?       |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| 1. Checking                                   |" << endl;
            cout << "\t\t\t\t| 2. Savings                                    |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;

            cin >> accountChoice;
            switch (accountChoice)   //nested switch case to chose account type
            {
            case 1:
                checkObj.setWithdraw();
                break;
            case 2:
                savObj.setWithdraw();
                break;
            default:
                cout << "Invalid choice! Please select again." << endl;
                break;
            }

            break;
        case 3:

            // call to check balance
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t|       Check Account Balance for?              |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| 1. Checking                                   |" << endl;
            cout << "\t\t\t\t| 2. Savings                                    |" << endl;
            //cout << "| 3. Checking & Savings                         |" << endl;  Modular case (Not needed here)
            cout << "\t\t\t\t-------------------------------------------------" << endl;

            cin >> accountChoice;
            switch (accountChoice)
            {
            case 1:
                cout << "Your current Checking balance is $" << checkObj.getBalance(); // gets balance for checkings account
                break;

            case 2:
                cout << "Your current Savings balance is $" << savObj.getSavingsBalance(); // gets balance for savings account
                break;

            default:
                cout << "Invalid choice! Please select again." << endl;
                break;

            }

            break;
        case 4:

            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| Select account you wish to transer from.       |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl;
            cout << "\t\t\t\t| 1. Checkings to Savings                                   |" << endl;
            cout << "\t\t\t\t| 2. Savings to Checkings                                    |" << endl;
            cout << "\t\t\t\t-------------------------------------------------" << endl << endl;

            cin >> accountChoice;
            switch (accountChoice)
            {
            case 1:
            {
                double depositTOsav = checkObj.getTransfer(); // Withdraw ammount from Checking
                savObj.setSavingsBalance(depositTOsav); // Deposit ammount to Savings
                break;
            }
            case 2:
            {
                double depositTOcheck = savObj.getTransfer(); // Withdraw ammount from Savings
                checkObj.setBalance(depositTOcheck); // Deposit ammount to Checkings
                break;
            }
            default:
                cout << " Invalid choice! Please select again." << endl;

            }
        case 5:
            cout << "Thank you for using this CLI system made by Hemerson G. Ramiro Jr.." << endl;
            isNotFinished = false;
            break;

        default:
            cout << "Invalid choice! Please select again." << endl;

            break;

        }
    }
    while(isNotFinished);
    return 0;
}
