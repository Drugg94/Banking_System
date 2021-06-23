#include<iostream>
#include<string>
#include<iomanip>
#include"highInterestChecking.h"

using namespace std;

void highInterestChecking::writeCheck(double amount)
{
	if (balance - amount < 0)
		cout << "Insufficient funds. Check written will bounce with provided amount.";
	else if (balance - amount >= 0 && balance - amount < minimumBalance)
	{
		cout << "Check successful, but your balance is below the minimum." << endl
			<< "Please add funds to get balance above the minimum immediately.";
		balance -= amount;
	}
	else
		balance -= amount;
}

void highInterestChecking::printMonthlyStatement()
{
	checkingAccount::printMonthlyStatement();
	cout << setw(25) << "Unlimited Monthly Checks." << endl;
	cout << setw(25) << "No Monthly Service Charge." << endl;
	cout << setw(25) << "Interest rate " << interestRate << "%." << endl;
	cout << setw(25) << "Minimum Balance needed $" << minimumBalance << "." << endl;
}

highInterestChecking::highInterestChecking(string n, int account, double bal)
	:noServiceChargeChecking(n, account, bal)
{
	checksRemaining = 0;
	interestRate = 0.025;
	minimumBalance = 750.00;
}