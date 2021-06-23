#include<iostream>
#include<iomanip>
#include<string>
#include"serviceChargeChecking.h"

using namespace std;

const int MAX_CHECKS = 10;
const double SERV_CHRG = 20.00;

void serviceChargeChecking::writeCheck(double amount)
{
	if (checksRemaining == 0)
		cout << "No checks remaining for this month.";
	else
	{
		if (balance - amount >= 0)
		{
			balance -= amount;
			checksRemaining--;
		}
		else
			cout << "Insufficient funds. Check written will bounce with provided amount.";
	
	}
}

void serviceChargeChecking::printMonthlyStatement()
{
	checkingAccount::printMonthlyStatement();
	cout << setw(25) << "Checks remaining: " << checksRemaining << endl;
	cout << setw(25) << "Monthly service fee: $" << SERV_CHRG << endl;
	cout << setw(25) << "No interest rate " << endl;
	cout << setw(25) << "No Minimum Balance needed" << endl;
}

serviceChargeChecking::serviceChargeChecking(string n, int account, double bal)
	: checkingAccount(n, account, bal)
{
	checksRemaining = MAX_CHECKS;
	interestRate = 0.00;
	minimumBalance = 0.00;
}
