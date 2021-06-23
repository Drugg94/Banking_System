#include<iostream>
#include<iomanip>
#include<string>
#include"certificateOfDeposit.h"

using namespace std;

const double INT_RATE = 0.075;
const double PENALTY = 100.00;

void certificateOfDeposit::printMonthlyStatement()
{
	cout << setw(75) << setfill('-') << "" << setfill(' ') << endl;
	cout << endl << setw(25) << "" << "Account Statement" << endl << endl;
	cout << setw(25) << "Name: " << name << endl;
	cout << setw(25) << "Account #: " << accountNumber << endl;
	cout << setw(25) << "Current Maturity Month: " << currentMonths << "." << endl;
	cout << setw(25) << "Final Maturity Month: " << matureMonths << "." << endl;
	cout << setw(25) << "Interest Rate Paid Monthly " << interestRate << "%." << endl;
	cout << setw(25) << "Current Balance: $" << balance << endl;
}

void certificateOfDeposit::withdrawMoney(double amount)
{
	if (currentMonths < matureMonths)
	{
		cout << "Certificate of Deposit has not passed maturation." << endl
			<< "Withdrawl will be penalized." << endl;
		if (balance - (amount + PENALTY) < 0)
			cout << "Declined: Insufficient funds in account!";
		else
			balance -= (amount + PENALTY);
	}
	else
		balance -= amount;
}

certificateOfDeposit::certificateOfDeposit(string n, int account, double bal, int maturityMonths)
	:bankAccount(n, account, bal)
{
	interestRate = INT_RATE;
	currentMonths = 1;
	matureMonths = maturityMonths;
}