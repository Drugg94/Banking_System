#include<iostream>
#include<iomanip>
#include<string>
#include"savingsAccount.h"

using namespace std;

void savingsAccount::withdrawMoney(double amount)
{
	if (balance - amount < 0)
		cout << "Declined: Insufficient funds in account!";
	else
		balance -= amount;
}

void savingsAccount::printMonthlyStatement()
{
	cout << setw(75) << setfill('-') << "" << setfill(' ') << endl;
	cout << endl << setw(25) << "" << "Account Statement" << endl << endl;
	cout << setw(25) << "Name: " << name << endl;
	cout << setw(25) << "Account #: " << accountNumber << endl;
	cout << setw(25) << "No Minimum Balance" << endl;
	cout << setw(25) << "Interest Rate Paid Monthly " << interestRate << "%." << endl;
	cout << setw(25) << "Current Balance: $" << balance << endl;
}

void savingsAccount::makeDeposit(double dollars)
{
	balance += dollars;

	cout << "Deposit successful. Current balance is " << endl
		<< "$" << balance;
}

savingsAccount::savingsAccount(string m, int acc, double blnc)
	:bankAccount(m, acc, blnc)
{
	double interestRate = 0.035;
}