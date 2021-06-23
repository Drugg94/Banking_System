#include<iostream>
#include<string>
#include "bankAccount.h"

using namespace std;

string bankAccount::getAccountOwner() const
{
	return name;
}

int bankAccount::getAccountNumber() const
{
	return accountNumber;
}

double bankAccount::getAccountBalance() const
{
	return balance;
}

void bankAccount::makeDeposit(double dollars)
{
	balance += dollars;

	cout << "You have deposited $" << dollars << " into your account making your new balance \n"
		<< "$" << balance << endl;
}

bankAccount::bankAccount(string n, int account, double bal)
{
	name = n;
	accountNumber = account;
	balance = bal;
}