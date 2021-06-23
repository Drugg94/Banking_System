#include<iostream>
#include<iomanip>
#include<string>
#include"highInterestSavings.h"

using namespace std;

const double INTEREST_RATE = 0.045;
const double MIN_BAL = 1000.00;
void highInterestSavings::withdrawMoney(double amount)
{
	if (balance - amount < 0)
		cout << "Declined: Insufficient funds in account!";
	else if (balance - amount < minimumBalance)
	{
		cout << "Withdraw successful, but the current balance is less than the minimum balance required." << endl
			<< "Please add funds to get balance above the minimum immediately.";
		balance -= amount;
	}
}

void highInterestSavings::printMonthlyStatement()
{
	cout << setw(75) << setfill('-') << "" << setfill(' ') << endl;
	cout << endl << setw(25) << "" << "Account Statement" << endl << endl;
	cout << setw(25) << "Name: " << name << endl;
	cout << setw(25) << "Account #: " << accountNumber << endl;
	cout << setw(25) << "Minimum Balance $" << minimumBalance << endl;
	cout << setw(25) << "Interest Rate Paid Monthly " << INTEREST_RATE << "%." << endl;
	cout << setw(25) << "Current Balance: $" << balance << endl;
}

highInterestSavings::highInterestSavings(string n, int account, double bal)
	: savingsAccount(n, account, bal)
{
	interestRate = INTEREST_RATE;
	minimumBalance = MIN_BAL;
}