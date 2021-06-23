#include <iostream>
#include <iomanip>
#include <string>
#include "serviceChargeChecking.h"
#include "highInterestChecking.h"
#include "certificateOfDeposit.h"
#include "highInterestSavings.h"

using namespace std;

void testCheckingWithCharge();
void testNoChargeChecking();
void testHighInterestChecking();
void testCertificateOfDeposit();
void testSavingsAccount();
void testHighInterestSavings();

int main()
{
    char prompt = ' ';
    cout << "Test Banking System \n" << endl;
    cout << "Please select your type of account." << endl;
    cout << "1 - Checking with Service Charge." << endl;
    cout << "2 - Checking without Service Charge." << endl;
    cout << "3 - Checking with high interest." << endl;
    cout << "4 - Certificate of Deposit." << endl;
    cout << "5 - Savings w/ low interest." << endl;
    cout << "6 - Savings w/ high interest." << endl;

    cin >> prompt;

    switch (prompt)
    {
    case '1':
        testCheckingWithCharge();
        break;
    case '2':
        testNoChargeChecking();
        break;
    case '3':
        testHighInterestChecking();
        break;
    case '4':
        testCertificateOfDeposit();
        break;
    case '5':
        testSavingsAccount();
        break;
    case '6':
        testHighInterestSavings();
        break;
    default:
        cout << "No valid selection made. You have to use the posted numbers." << endl;
        break;
    }
}

void testCheckingWithCharge()
{
    char prompt = ' ';
    double amount = 0.00;

    serviceChargeChecking checking("Derek Ruggirello", 1184, 2000.03);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Write Check" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "4 - Withdraw Money" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            checking.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to write on the check.";
            cin >> amount;
            checking.writeCheck(amount);
            break;
        case '3':
            checking.printMonthlyStatement();
            break;
        case '4':
            cout << "Please enter a withdrawal amount.";
            checking.withdrawMoney(amount);
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
            }
        checking.printMonthlyStatement();
        cout << endl;
    }
}

void testNoChargeChecking()
{
    char prompt = ' ';
    double amount = 0.00;

    noServiceChargeChecking noChecking("Derek Ruggirello", 1184, 2000.03);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Write Check" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "4 - Withdraw Money" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            noChecking.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to write the check for.";
            cin >> amount;
            noChecking.writeCheck(amount);
            break;
        case '3':
            noChecking.printMonthlyStatement();
            break;
        case '4':
            cout << "Please enter a withdrawal amount.";
            cin >> amount;
            noChecking.withdrawMoney(amount);
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
        }
        noChecking.printMonthlyStatement();
        cout << endl;
    }

}

void testHighInterestChecking()
{
    char prompt = ' ';
    double amount = 0.00;

    highInterestChecking highChecking("Derek Ruggirello", 1184, 2000.03);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Write Check" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "4 - Withdraw Money" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            highChecking.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to write on the check.";
            cin >> amount;
            highChecking.writeCheck(amount);
            break;
        case '3':
            highChecking.printMonthlyStatement();
            break;
        case '4':
            highChecking.withdrawMoney(amount);
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
        }
        highChecking.printMonthlyStatement();
        cout << endl;
    }

}

void testCertificateOfDeposit()
{
    char prompt = ' ';
    double amount = 0.00;

    certificateOfDeposit certificate("Derek Ruggirello", 1184, 2000.03, 24);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Withdraw Money" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            certificate.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to withdraw.";
            cin >> amount;
            certificate.withdrawMoney(amount);
            break;
        case '3':
            certificate.printMonthlyStatement();
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
        }
        certificate.printMonthlyStatement();
        cout << endl;
    }

}

void testSavingsAccount()
{
    char prompt = ' ';
    double amount = 0.00;

    savingsAccount save("Derek Ruggirello", 1184, 2000.03);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Withdraw Money" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            save.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to withdraw.";
            cin >> amount;
            save.withdrawMoney(amount);
            break;
        case '3':
            save.printMonthlyStatement();
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
        }
        save.printMonthlyStatement();
        cout << endl;
    }

}

void testHighInterestSavings()
{
    char prompt = ' ';
    double amount = 0.00;

    highInterestSavings highSave("Derek Ruggirello", 1184, 2000.03);

    while (prompt != 'X')
    {
        cout << "Enter a prompt from the following selection: " << endl;
        cout << "1 - Deposit" << endl;
        cout << "2 - Withdraw Money" << endl;
        cout << "3 - Print Statement" << endl;
        cout << "X - Exit" << endl;

        cin >> prompt;

        switch (prompt)
        {
        case '1':
            cout << "Please enter a deposit amount.";
            cin >> amount;
            highSave.makeDeposit(amount);
            break;
        case '2':
            cout << "Please enter an amount to withdraw.";
            cin >> amount;
            highSave.withdrawMoney(amount);
            break;
        case '3':
            highSave.printMonthlyStatement();
            break;
        case 'X':
            break;
        default:
            cout << "Invalid entry, please enter one of the mentioned entries." << endl;
            break;
        }
        highSave.printMonthlyStatement();
        cout << endl;
    }

}