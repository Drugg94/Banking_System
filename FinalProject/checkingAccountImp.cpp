#include<iostream>
#include<iomanip>
#include<string>
#include"checkingAccount.h"

using namespace std;

void checkingAccount::withdrawMoney(double amount)
{
	if (balance - amount < 0)
		cout << "Declined: Insufficient funds in account!";
	else
		balance -= amount;
}

void checkingAccount::printMonthlyStatement()
{
	cout << setw(75) << setfill('-') << "" << setfill(' ') << endl;
	cout << endl << setw(25) << "" << "Account Statement" << endl << endl;
	cout << setw(25) << "Name: " << name << endl;
	cout << setw(25) << "Account #: " << accountNumber << endl;
	cout << setw(25) << "Current Balance: $" << balance << endl;
}

void checkingAccount::makeDeposit(double dollars)
{
	balance += dollars;

	cout << "Deposit successful. Current balance is " << endl
	<< "$" << balance;
}

checkingAccount::checkingAccount(string n, int account, double bal)
	: bankAccount(n, account, bal)
{
}