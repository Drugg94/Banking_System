#include<iostream>
#include<iomanip>
#include<string>
#include"noServiceChargeChecking.h"

using namespace std;

void noServiceChargeChecking::writeCheck(double amount)
{
	if (balance - amount < 0)
		cout << "Insufficient funds. Check written will bounce with provided amount.";
	else if (balance - amount >= 0 && balance - amount < 500.00)
	{
		cout << "Check successful, but your balance is below the minimum." << endl
			<< "Please add funds to get balance above the minimum immediately.";
		balance -= amount;
	}
	else
		balance -= amount;
}

void noServiceChargeChecking::printMonthlyStatement()
{
	checkingAccount::printMonthlyStatement();
	cout << setw(25) << "Unlimited Monthly Checks." << endl;
	cout << setw(25) << "No Monthly Service Charge." << endl;
	cout << setw(25) << "Interest rate " << interestRate << "%." << endl;
	cout << setw(25) << "Minimum Balance needed $" << minimumBalance << "." << endl;
}

noServiceChargeChecking::noServiceChargeChecking(string n, int account, double bal)
	:checkingAccount(n, account, bal)
{
	checksRemaining = 0;
	interestRate = 0.01;
	minimumBalance = 500.00;
}